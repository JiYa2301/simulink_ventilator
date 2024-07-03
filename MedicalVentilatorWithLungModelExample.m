%% Medical Ventilator with Lung Model
%
% This example models a positive-pressure medical ventilator system. A
% preset flow rate is supplied to the patient. The lungs are modeled with
% the Translational Mechanical Converter (MA), which converts moist air
% pressure into translational motion. By setting the Interface
% cross-sectional area to unity, displacement in the mechanical
% translational network becomes a proxy for volume, force becomes a proxy
% for pressure, spring constant becomes a proxy for respiratory elastance,
% and damping coefficient becomes a proxy for respiratory resistance.
%
% The exchange of oxygen and carbon dioxide in the moist air mixture is not
% currently modeled.
%
% Copyright 2017 The MathWorks, Inc.


%% Model

open_system('MedicalVentilatorWithLungModel')

set_param(find_system(bdroot,'FindAll','on','type','annotation','Tag','ModelFeatures'),'Interpreter','off');

%% Check Valve 1 Subsystem

open_system('MedicalVentilatorWithLungModel/Check Valve 1','force')

%% Control Signal Subsystem

open_system('MedicalVentilatorWithLungModel/Control Signal','force')

%% Humidifier Subsystem

open_system('MedicalVentilatorWithLungModel/Humidifier','force')

%% Simulation Results from Scopes

set_param('MedicalVentilatorWithLungModel/Scope','open','on');
sim('MedicalVentilatorWithLungModel');

%% 

set_param('MedicalVentilatorWithLungModel/Scope','open','off');
%% Simulation Results from Simscape Logging
%%
%
% This plot shows the temperature and relative humidity of air flowing
% through the inspiratory and expiratory tubes. Room air is heated and
% humidified before it is supplied to the patient.
%


MedicalVentilatorWithLungModelPlot1T;
%%
%
% This plot shows the accumulation of condensed water in the expiratory
% tube, which should be drained periodically. The water comes from the
% humidifier and the patient's respiration.
%


MedicalVentilatorWithLungModelPlot2Condensation;

%%

