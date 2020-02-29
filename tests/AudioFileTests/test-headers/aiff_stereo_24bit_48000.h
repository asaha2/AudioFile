#include <vector>

namespace aiff_stereo_24bit_48000 { 

int numSamplesPerChannel = 384000;
int bitDepth = 24;
uint32_t sampleRate = 48000;
int numChannels = 2;

std::vector<std::vector<double>> testBuffer = {{0.0, 0.0, 7.15255737305e-07, 2.62260437012e-06, 6.55651092529e-06, 1.20401382446e-05, 2.07424163818e-05, 3.20672988892e-05, 4.70876693726e-05, 6.47306442261e-05, 8.6784362793e-05, 0.00011146068573, 0.00014066696167, 0.00017261505127, 0.000209331512451, 0.000248312950134, 0.000292301177979, 0.000338315963745, 0.000393509864807, 0.000473976135254, 0.000592470169067, 0.00075101852417, 0.000946760177612, 0.00117576122284, 0.00144374370575, 0.00173485279083, 0.00205719470978, 0.00240528583527, 0.00276792049408, 0.00316345691681, 0.00356805324554, 0.00399124622345, 0.00444197654724, 0.00488650798798, 0.00536143779755, 0.00584626197815, 0.0063716173172, 0.00703537464142, 0.00777399539948, 0.00862634181976, 0.00959515571594, 0.0105718374252, 0.0116741657257, 0.0128010511398, 0.0139085054398, 0.0151426792145, 0.0163009166718, 0.0174760818481, 0.018746137619, 0.0198611021042, 0.0210816860199, 0.0222927331924, 0.0233352184296, 0.0245825052261, 0.0257730484009, 0.027095913887, 0.0287066698074, 0.0301060676575, 0.0317647457123, 0.0334404706955, 0.0348604917526, 0.0366204977036, 0.0380429029465, 0.0394375324249, 0.0410016775131, 0.0420278310776, 0.0433530807495, 0.04441177845, 0.0451719760895, 0.0462588071823, 0.0466803312302, 0.0472087860107, 0.0474419593811, 0.0470560789108, 0.0469379425049, 0.046102643013, 0.0453232526779, 0.0444115400314, 0.0430076122284, 0.0419368743896, 0.0402438640594, 0.0387357473373, 0.0370730161667, 0.0350713729858, 0.0334171056747, 0.0311522483826, 0.029196023941, 0.0269672870636, 0.0245436429977, 0.0223712921143, 0.0196386575699, 0.0173389911652, 0.0146013498306, 0.0119432210922, 0.00939702987671, 0.00635671615601, 0.00381934642792, 0.000643968582153, -0.00216937065125, -0.00527429580688, -0.00859546661377, -0.0111476182938, -0.015127658844, -0.0176110267639, -0.0206387042999, -0.0252176523209, -0.0264073610306, -0.031000494957, -0.035413146019, -0.0352197885513, -0.0428574085236, -0.0441938638687, -0.0706510543823, -0.156461954117, -0.0855280160904, 0.242390990257, 0.386439442635, 0.124672412872, -0.0839387178421, 0.0599592924118, 0.258365035057, 0.194845199585, 0.0303835868835, 0.0324206352234, 0.132118105888, 0.258054018021, 0.35796380043, 0.247051477432, 0.0187673568726, -0.129147052765, -0.150510430336, 0.0396764278412, 0.250721335411, 0.15309047699, -0.123431563377, -0.222726345062, -0.0696159601212, 0.0474404096603, -0.023664355278, -0.0679866075516, -0.0815613269806, -0.198069810867, -0.316736340523, -0.360417842865, -0.256011366844, -0.0319118499756, -0.0019611120224, -0.195511102676, -0.297767758369, -0.307256579399, -0.354103326797, -0.33858692646, -0.333583593369, -0.407473802567, -0.30776309967, -0.167340517044, -0.278041601181, -0.380175471306, -0.381715297699, -0.471774458885, -0.486682534218, -0.302387475967, -0.173205256462, -0.302421212196, -0.450084090233, -0.419452309608, -0.458776712418, -0.464980125427, -0.251423478127, -0.279134511948, -0.496280670166, -0.369530916214, -0.18422472477, -0.283529639244, -0.384026885033, -0.354256629944, -0.347236633301, -0.380395412445, -0.329265594482, -0.209116339684, -0.207740426064, -0.353983402252, -0.425755143166, -0.253952741623, -0.0636324882507, -0.177767157555, -0.334607005119, -0.192556381226, -0.0431544780731, -0.0909780263901, -0.179208636284, -0.271369576454, -0.225171923637, -0.0150212049484, 0.019883275032, -0.0876061916351, -0.0902794599533, -0.0633208751678, -0.057569861412, -0.0867807865143, -0.0811965465546, 0.128650307655, 0.240601301193, 0.0414025783539, -0.0151249170303, 0.13299369812, 0.0876718759537, -0.0189148187637, 0.0654835700989, 0.189029216766, 0.265171289444, 0.309159517288, 0.241670489311, 0.127165913582, 0.128563523293, 0.247101902962, 0.335354566574, 0.304864048958, 0.23640525341, 0.19801568985, 0.241459369659, 0.382078051567, 0.395725727081, 0.242537260056, 0.222943305969, 0.371995925903, 0.470427632332, 0.431231856346, 0.362566232681, 0.383408784866, 0.384760260582, 0.296636939049, 0.298962712288, 0.436052322388, 0.489612579346, 0.397243022919, 0.381596207619, 0.453426480293, 0.441441178322, 0.399931907654, 0.351653933525, 0.354856610298, 0.481471896172, 0.443799138069, 0.295865416527, 0.377491831779, 0.463033080101, 0.420113325119, 0.443704009056, 0.476433515549, 0.435949444771, 0.326115727425, 0.277460813522, 0.422639131546, 0.49808883667, 0.385050773621, 0.300109505653, 0.288846731186, 0.368915915489, 0.445814847946, 0.372593283653, 0.291160225868, 0.228460550308, 0.226050853729, 0.408937096596, 0.427754163742, 0.208362221718, 0.233335733414, 0.398049116135, 0.321216583252, 0.195892333984, 0.223621249199, 0.264876246452, 0.227495670319, 0.136987090111, 0.120776176453, 0.249395012856, 0.267896294594, 0.113357663155, 0.125156760216, 0.268502354622, 0.248358011246, 0.13637471199, 0.0691511631012, 0.0314657688141, 0.0330513715744, 0.0773905515671, 0.149280905724, 0.154844999313, 0.0380657911301, -0.0138261318207, 0.0285362005234, 0.0115152597427, 0.0425109863281, 0.101264357567, 0.0107766389847, -0.0619852542877, -0.0713757276535, -0.131713151932, -0.053614616394, 0.0620683431625, -0.0643295049667, -0.120489358902, 0.00903403759003, -0.0639646053314, -0.194185137749, -0.119675755501, -0.13497543335, -0.241093277931, -0.135569214821, 0.0104278326035, -0.0417020320892, -0.160125494003, -0.215244412422, -0.21687912941, -0.18989944458, -0.225622415543, -0.306589484215, -0.21904540062, -0.073798418045, -0.15297472477, -0.237103819847, -0.165241360664, -0.188237547874, -0.258862257004, -0.238179087639, -0.295460343361, -0.374995589256, -0.239043235779, -0.0495188236237, -0.104093909264, -0.264411449432, -0.296117186546, -0.320602416992, -0.372968554497, -0.283231258392, -0.140885949135, -0.125366926193, -0.184899926186, -0.215556502342, -0.235879659653, -0.269177317619, -0.234974980354, -0.166673898697, -0.199361920357, -0.24594950676, -0.211520195007, -0.229872822762, -0.293895721436, -0.204480648041, -0.048131942749, -0.100501298904, -0.243804574013, -0.201029777527, -0.0938584804535, -0.133949041367, -0.237436771393, -0.220630288124, -0.105543375015, -0.0507572889328, -0.040141582489, -0.0348224639893, -0.094694018364, -0.170706391335, -0.185458779335, -0.082855463028, 0.0327036380768, -0.0294657945633, -0.0856486558914, -0.00882852077484, 0.0230228900909, 0.0494097471237, 0.0787169933319, 0.00938403606415, -0.0207486152649, 0.0157769918442, -0.0130076408386, -0.0164238214493, 0.0760751962662, 0.138566613197, 0.171440839767, 0.198361039162, 0.143127083778, 0.088446855545, 0.0938546657562, 0.130574226379, 0.194188833237, 0.165655016899, 0.148203849792, 0.273248791695, 0.260329127312, 0.158272743225, 0.231288194656, 0.257778167725, 0.195262670517, 0.265777230263, 0.335020780563, 0.278555393219, 0.203668117523, 0.212065458298, 0.347125291824, 0.420643091202, 0.334202766418, 0.327323079109, 0.350924253464, 0.282999396324, 0.332008957863, 0.404524564743, 0.33203971386, 0.302574753761, 0.369549274445, 0.458566784859, 0.503230810165, 0.431790709496, 0.366141557693, 0.382061481476, 0.397497177124, 0.375038862228, 0.345761179924, 0.424370765686, 0.545341610909, 0.485374450684, 0.353318572044, 0.374862790108, 0.485868930817, 0.514790534973, 0.432327866554, 0.3892557621, 0.464935064316, 0.509564042091, 0.433503508568, 0.371815800667, 0.432608008385, 0.495849251747, 0.4559674263, 0.434742927551, 0.476056218147, 0.473335027695, 0.440472602844, 0.391585350037, 0.335571408272, 0.399984002113, 0.515089392662, 0.497043728828, 0.42444562912, 0.40485060215, 0.39621078968, 0.38011777401, 0.382921457291, 0.40823507309, 0.424188017845, 0.41378724575, 0.398612856865, 0.385111689568, 0.363776922226, 0.355135321617, 0.356579303741, 0.335686206818, 0.353016853333, 0.397729992867, 0.343502998352, 0.296980619431, 0.356427669525, 0.360570788383, 0.300528287888, 0.276401519775, 0.282622933388, 0.325568556786, 0.327297449112, 0.25475525856, 0.258142471313, 0.310843110085, 0.285435557365, 0.248847723007, 0.232942342758, 0.213665366173, 0.241914987564, 0.273983120918, 0.253250360489, 0.228222489357, 0.19800722599, 0.169912457466, 0.199977278709, 0.228764414787, 0.188960552216, 0.160185694695, 0.191247224808, 0.209365963936, 0.176359057426, 0.128537893295, 0.124485254288, 0.178055405617, 0.192198753357, 0.13643848896, 0.117289662361, 0.12717628479, 0.109505534172, 0.112555980682, 0.115017771721, 0.0977689027786}, {-1.19209289551e-07, -1.19209289551e-07, 4.76837158203e-07, 9.53674316406e-07, 2.98023223877e-06, 5.12599945068e-06, 9.53674316406e-06, 1.38282775879e-05, 2.13384628296e-05, 2.87294387817e-05, 3.88622283936e-05, 4.97102737427e-05, 6.31809234619e-05, 7.72476196289e-05, 9.38177108765e-05, 0.000111222267151, 0.000131011009216, 0.000151634216309, 0.000176072120667, 0.000212550163269, 0.000265121459961, 0.000336766242981, 0.000424027442932, 0.000527143478394, 0.000646591186523, 0.000777721405029, 0.000921487808228, 0.00107800960541, 0.00124001502991, 0.00141751766205, 0.00159871578217, 0.00178837776184, 0.00199055671692, 0.00218939781189, 0.00240278244019, 0.00261926651001, 0.00285542011261, 0.0031521320343, 0.00348353385925, 0.00386536121368, 0.00429940223694, 0.00473725795746, 0.00523102283478, 0.00573623180389, 0.00623214244843, 0.00678539276123, 0.00730431079865, 0.00783097743988, 0.00840020179749, 0.00889933109283, 0.00944709777832, 0.00998866558075, 0.0104569196701, 0.0110148191452, 0.0115493535995, 0.0121412277222, 0.0128636360168, 0.013490319252, 0.0142337083817, 0.0149846076965, 0.0156205892563, 0.0164099931717, 0.0170464515686, 0.0176721811295, 0.018372297287, 0.0188329219818, 0.0194262266159, 0.0199007987976, 0.0202417373657, 0.0207278728485, 0.0209180116653, 0.0211533308029, 0.0212593078613, 0.0210849046707, 0.0210332870483, 0.0206580162048, 0.0203095674515, 0.0199004411697, 0.0192716121674, 0.0187916755676, 0.0180329084396, 0.017357468605, 0.0166119337082, 0.0157155990601, 0.0149736404419, 0.0139594078064, 0.0130821466446, 0.0120841264725, 0.0109976530075, 0.0100243091583, 0.0088005065918, 0.00776839256287, 0.00654351711273, 0.00535202026367, 0.00420761108398, 0.00285220146179, 0.00170576572418, 0.00028133392334, -0.000933766365051, -0.00239861011505, -0.00385797023773, -0.00489664077759, -0.00693309307098, -0.00781047344208, -0.0090765953064, -0.0117307901382, -0.0114005804062, -0.0138711929321, -0.0166138410568, -0.0145287513733, -0.0201392173767, -0.0200175046921, -0.0442705154419, -0.128485560417, -0.0557730197906, 0.274325013161, 0.41976416111, 0.160236477852, -0.0467705726624, 0.0985895395279, 0.299269556999, 0.236871480942, 0.0743926763535, 0.0783281326294, 0.179032921791, 0.307183146477, 0.408252000809, 0.298677802086, 0.0725502967834, -0.0746346712112, -0.0942211151123, 0.09741127491, 0.308969974518, 0.213367938995, -0.0623807907104, -0.160823583603, -0.00596261024475, 0.111093044281, 0.0411869287491, -0.00197052955627, -0.015687584877, -0.130811929703, -0.249449253082, -0.293438792229, -0.188077092171, 0.035208940506, 0.065181851387, -0.128233790398, -0.231864690781, -0.241227388382, -0.288885831833, -0.274539232254, -0.269575834274, -0.34505045414, -0.246193647385, -0.106593608856, -0.219108700752, -0.321876883507, -0.325042843819, -0.416580557823, -0.432566404343, -0.250464320183, -0.122480988503, -0.253515005112, -0.403170347214, -0.373912453651, -0.415549039841, -0.42338180542, -0.211927652359, -0.241904616356, -0.460775971413, -0.336546301842, -0.153137326241, -0.254762530327, -0.357666730881, -0.329927563667, -0.325591921806, -0.360870361328, -0.312315821648, -0.194603562355, -0.195457816124, -0.344442009926, -0.41836810112, -0.249293804169, -0.0614351034164, -0.178010702133, -0.337650775909, -0.197816252708, -0.0512307882309, -0.101366877556, -0.192066788673, -0.286917209625, -0.242814898491, -0.0355290174484, -0.00287067890167, -0.112865686417, -0.118167638779, -0.0931094884872, -0.0901445150375, -0.121329665184, -0.117992758751, 0.0892655849457, 0.199530363083, -0.00239431858063, -0.0607322454453, 0.0856019258499, 0.0377227067947, -0.0700871944427, 0.0119827985764, 0.133543491364, 0.208490967751, 0.250037908554, 0.181517958641, 0.0654861927032, 0.0647268295288, 0.182660579681, 0.268949389458, 0.237186551094, 0.168328762054, 0.127852678299, 0.17075407505, 0.310601592064, 0.322524905205, 0.169592618942, 0.148920178413, 0.296830892563, 0.395664811134, 0.355157017708, 0.286342859268, 0.307636857033, 0.307721138, 0.220103979111, 0.222511053085, 0.358906507492, 0.413661837578, 0.321054697037, 0.305366158485, 0.378437757492, 0.366124749184, 0.325597405434, 0.278423309326, 0.281516671181, 0.409678578377, 0.372665882111, 0.225403189659, 0.308948516846, 0.394963026047, 0.353518128395, 0.378707051277, 0.412150025368, 0.37380862236, 0.265231609344, 0.218045949936, 0.365370988846, 0.441971540451, 0.331094622612, 0.247895956039, 0.238341093063, 0.320865511894, 0.399327754974, 0.328456759453, 0.249118447304, 0.18835735321, 0.188521623611, 0.373290777206, 0.394668340683, 0.177558064461, 0.204765796661, 0.372140884399, 0.297365665436, 0.174743294716, 0.204792976379, 0.24847817421, 0.213824629784, 0.1255671978, 0.112183213234, 0.243115901947, 0.264197349548, 0.112282752991, 0.126321554184, 0.272489070892, 0.254542589188, 0.145228147507, 0.0805835723877, 0.0451781749725, 0.0495693683624, 0.0959311723709, 0.170439481735, 0.178338289261, 0.063624382019, 0.014456152916, 0.0586551427841, 0.0442037582397, 0.0774142742157, 0.13791012764, 0.0500282049179, -0.0212334394455, -0.0284266471863, -0.0866243839264, -0.00715327262878, 0.111043572426, -0.0141056776047, -0.0686919689178, 0.0629787445068, -0.00925946235657, -0.137394785881, -0.0614476203918, -0.0759890079498, -0.18007338047, -0.0740259885788, 0.0731356143951, 0.0226602554321, -0.0956362485886, -0.149271845818, -0.150223612785, -0.123203158379, -0.157385587692, -0.238394618034, -0.150428891182, -0.00419878959656, -0.0840981006622, -0.167488694191, -0.0953677892685, -0.119052171707, -0.188877940178, -0.168948769569, -0.226736426353, -0.305851459503, -0.171146988869, 0.0183345079422, -0.0366661548615, -0.198464632034, -0.230174899101, -0.255927324295, -0.309376835823, -0.2200050354, -0.0794631242752, -0.0647164583206, -0.125501394272, -0.157911658287, -0.17901134491, -0.214244961739, -0.181379675865, -0.114506483078, -0.14938223362, -0.197202801704, -0.164903759956, -0.1850669384, -0.250761628151, -0.163706183434, -0.00897037982941, -0.0637035369873, -0.20910346508, -0.168325304985, -0.0636737346649, -0.105634450912, -0.211677670479, -0.197095274925, -0.0842590332031, -0.0321180820465, -0.023634314537, -0.0210517644882, -0.0831899642944, -0.161666631699, -0.179038286209, -0.0786243677139, 0.0341299772263, -0.0302890539169, -0.0891093015671, -0.014927148819, 0.0146209001541, 0.0381743907928, 0.0653512477875, -0.00664341449738, -0.0392218828201, -0.00487899780273, -0.0364784002304, -0.0419083833694, 0.0478922128677, 0.108030200005, 0.138924717903, 0.163105964661, 0.106156826019, 0.0490304231644, 0.0521767139435, 0.0872192382812, 0.148090004921, 0.118087768555, 0.0986764431, 0.221426010132, 0.20741891861, 0.102917194366, 0.174337506294, 0.199568271637, 0.134737730026, 0.204523324966, 0.272092342377, 0.213774800301, 0.138409018517, 0.144821405411, 0.279000759125, 0.352064728737, 0.263651967049, 0.25655066967, 0.279292941093, 0.209959387779, 0.259400725365, 0.330751895905, 0.25750541687, 0.228487610817, 0.294230103493, 0.383488535881, 0.428495287895, 0.355996608734, 0.291157960892, 0.307050585747, 0.322169780731, 0.301016449928, 0.27143406868, 0.350448727608, 0.472605824471, 0.412439227104, 0.281745791435, 0.304203033447, 0.415433049202, 0.446090221405, 0.364154577255, 0.322218179703, 0.39972615242, 0.444913744926, 0.370715498924, 0.310413002968, 0.372268199921, 0.437703967094, 0.398979663849, 0.379665493965, 0.422918915749, 0.421570301056, 0.391087055206, 0.343777894974, 0.289831995964, 0.356526255608, 0.47335922718, 0.45785844326, 0.387147307396, 0.369844794273, 0.36363863945, 0.349529027939, 0.355008840561, 0.382448911667, 0.400947332382, 0.393028378487, 0.380054473877, 0.369297266006, 0.35012280941, 0.344156742096, 0.348076581955, 0.329565644264, 0.34970498085, 0.396659851074, 0.34521484375, 0.301041841507, 0.362920641899, 0.36975300312, 0.31182050705, 0.290483951569, 0.298932790756, 0.344358205795, 0.348723888397, 0.278164744377, 0.284276604652, 0.338948130608, 0.315825223923, 0.281694054604, 0.267471909523, 0.250889539719, 0.280975699425, 0.315008640289, 0.296641945839, 0.272895097733, 0.245066404343, 0.218633055687, 0.250158190727, 0.281358957291, 0.242449641228, 0.215462207794, 0.248273253441, 0.267071485519, 0.236220598221, 0.189364671707, 0.186217427254, 0.241605877876, 0.255946159363, 0.201531767845, 0.183616399765, 0.193537712097, 0.177367925644, 0.180633068085, 0.183247327805, 0.167339086533}};

}; // end namespace
