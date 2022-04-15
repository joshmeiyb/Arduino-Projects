ii = 0;
distance = zeros(1e4,1);
t = zeros(1e4);

%tic
%while toc < 15
for ii = 1:100
    distance(ii) = readDistance(ultrasonicObj);
    t(ii) = ii;
end

distance = distance(1:ii);
t = t(1:ii);
figure
plot(t, distance)