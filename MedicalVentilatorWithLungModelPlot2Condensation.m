% Code to plot simulation results from MedicalVentilatorWithLungModel
%% Plot Description:
%
% This plot shows the accumulation of condensed water in the expiratory
% tube, which should be drained periodically. The water comes from the
% humidifier and the patient's respiration.

% Copyright 2017 The MathWorks, Inc.

% Generate simulation results if they don't exist
if ~exist('simlog_MedicalVentilatorWithLungModel', 'var')
    sim('MedicalVentilatorWithLungModel')
end

% Reuse figure if it exists, else create new figure
if ~exist('h2_MedicalVentilatorWithLungModel', 'var') || ...
        ~isgraphics(h2_MedicalVentilatorWithLungModel, 'figure')
    h2_MedicalVentilatorWithLungModel = figure('Name', 'MedicalVentilatorWithLungModel');
end
figure(h2_MedicalVentilatorWithLungModel)
clf(h2_MedicalVentilatorWithLungModel)

plotCondensation(simlog_MedicalVentilatorWithLungModel)



% Create plot from simulation results
function plotCondensation(simlog)

% Get simulation results
t = simlog.Expiratory_Tube.W.series.time;
W = simlog.Expiratory_Tube.W.series.values('kg/s');

% Compute accumulation of condensate
M = cumtrapz(t, W);
rho = 998.2; % kg/m^3
V = M/rho*1e6; % mL

% Plot results
plot(t, V, 'LineWidth', 1)
grid on
xlabel('Time (s)')
ylabel('Volume of Water (mL)')
title('Condensate Accumulation in Expiratory Tube')

end