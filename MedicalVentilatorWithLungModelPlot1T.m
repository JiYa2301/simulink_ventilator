% Code to plot simulation results from MedicalVentilatorWithLungModel
%% Plot Description:
%
% This plot shows the temperature and relative humidity of air flowing
% through the inspiratory and expiratory tubes. Room air is heated and
% humidified before it is supplied to the patient.

% Copyright 2017-2018 The MathWorks, Inc.

% Generate simulation results if they don't exist
if ~exist('simlog_MedicalVentilatorWithLungModel', 'var')
    sim('MedicalVentilatorWithLungModel')
end

% Reuse figure if it exists, else create new figure
if ~exist('h1_MedicalVentilatorWithLungModel', 'var') || ...
        ~isgraphics(h1_MedicalVentilatorWithLungModel, 'figure')
    h1_MedicalVentilatorWithLungModel = figure('Name', 'MedicalVentilatorWithLungModel');
end
figure(h1_MedicalVentilatorWithLungModel)
clf(h1_MedicalVentilatorWithLungModel)

plotTemperatureHumidity(simlog_MedicalVentilatorWithLungModel)



% Create plot from simulation results
function plotTemperatureHumidity(simlog)

% Get simulation results
t = simlog.Inspiratory_Tube.T_I.series.time;
T_inspire = simlog.Inspiratory_Tube.T_I.series.values('degC');
RH_inspire = simlog.Inspiratory_Tube.RH_I.series.values;
T_expire = simlog.Expiratory_Tube.T_I.series.values('degC');
RH_expire = simlog.Expiratory_Tube.RH_I.series.values;
T_room = simlog.Room_Air_Source.T_I.series.values('degC');
RH_room = simlog.Room_Air_Source.RH_I.series.values;

% Plot results
handles(1) = subplot(2, 1, 1);
plot(t, T_inspire, 'LineWidth', 1)
hold on
plot(t, T_expire, 'LineWidth', 1)
plot(t, T_room, 'LineWidth', 1)
hold off
grid on
axis([0 30 15 40])
ylabel('Temperature (degC)')
legend('Inspiratory Tube', 'Expiratory Tube', 'Room', 'Location', 'Best')

handles(2) = subplot(2, 1, 2);
plot(t, RH_inspire, 'LineWidth', 1)
hold on
plot(t, RH_expire, 'LineWidth', 1)
plot(t, RH_room, 'LineWidth', 1)
hold off
grid on
axis([0 30 0 1.1])
ylabel('Relative Humidity')
xlabel('Time (s)')

linkaxes(handles, 'x')

end