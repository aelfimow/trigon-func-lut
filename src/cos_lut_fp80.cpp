#include "types.h"
#include "cos_lut_fp80.h"
#include "degree_to_rad.h"
#include <cmath>
#include <numbers>

namespace cos_lut_fp80
{
    using namespace degree_to_rad;

    lut_func_t const lut[MAX_LUT_ELEM]
    {
        []() -> fp80 { return cosl(to_rad_l(0U)); },
        []() -> fp80 { return cosl(to_rad_l(1U)); },
        []() -> fp80 { return cosl(to_rad_l(2U)); },
        []() -> fp80 { return cosl(to_rad_l(3U)); },
        []() -> fp80 { return cosl(to_rad_l(4U)); },
        []() -> fp80 { return cosl(to_rad_l(5U)); },
        []() -> fp80 { return cosl(to_rad_l(6U)); },
        []() -> fp80 { return cosl(to_rad_l(7U)); },
        []() -> fp80 { return cosl(to_rad_l(8U)); },
        []() -> fp80 { return cosl(to_rad_l(9U)); },
        []() -> fp80 { return cosl(to_rad_l(10U)); },
        []() -> fp80 { return cosl(to_rad_l(11U)); },
        []() -> fp80 { return cosl(to_rad_l(12U)); },
        []() -> fp80 { return cosl(to_rad_l(13U)); },
        []() -> fp80 { return cosl(to_rad_l(14U)); },
        []() -> fp80 { return cosl(to_rad_l(15U)); },
        []() -> fp80 { return cosl(to_rad_l(16U)); },
        []() -> fp80 { return cosl(to_rad_l(17U)); },
        []() -> fp80 { return cosl(to_rad_l(18U)); },
        []() -> fp80 { return cosl(to_rad_l(19U)); },
        []() -> fp80 { return cosl(to_rad_l(20U)); },
        []() -> fp80 { return cosl(to_rad_l(21U)); },
        []() -> fp80 { return cosl(to_rad_l(22U)); },
        []() -> fp80 { return cosl(to_rad_l(23U)); },
        []() -> fp80 { return cosl(to_rad_l(24U)); },
        []() -> fp80 { return cosl(to_rad_l(25U)); },
        []() -> fp80 { return cosl(to_rad_l(26U)); },
        []() -> fp80 { return cosl(to_rad_l(27U)); },
        []() -> fp80 { return cosl(to_rad_l(28U)); },
        []() -> fp80 { return cosl(to_rad_l(29U)); },
        []() -> fp80 { return cosl(to_rad_l(30U)); },
        []() -> fp80 { return cosl(to_rad_l(31U)); },
        []() -> fp80 { return cosl(to_rad_l(32U)); },
        []() -> fp80 { return cosl(to_rad_l(33U)); },
        []() -> fp80 { return cosl(to_rad_l(34U)); },
        []() -> fp80 { return cosl(to_rad_l(35U)); },
        []() -> fp80 { return cosl(to_rad_l(36U)); },
        []() -> fp80 { return cosl(to_rad_l(37U)); },
        []() -> fp80 { return cosl(to_rad_l(38U)); },
        []() -> fp80 { return cosl(to_rad_l(39U)); },
        []() -> fp80 { return cosl(to_rad_l(40U)); },
        []() -> fp80 { return cosl(to_rad_l(41U)); },
        []() -> fp80 { return cosl(to_rad_l(42U)); },
        []() -> fp80 { return cosl(to_rad_l(43U)); },
        []() -> fp80 { return cosl(to_rad_l(44U)); },
        []() -> fp80 { return cosl(to_rad_l(45U)); },
        []() -> fp80 { return cosl(to_rad_l(46U)); },
        []() -> fp80 { return cosl(to_rad_l(47U)); },
        []() -> fp80 { return cosl(to_rad_l(48U)); },
        []() -> fp80 { return cosl(to_rad_l(49U)); },
        []() -> fp80 { return cosl(to_rad_l(50U)); },
        []() -> fp80 { return cosl(to_rad_l(51U)); },
        []() -> fp80 { return cosl(to_rad_l(52U)); },
        []() -> fp80 { return cosl(to_rad_l(53U)); },
        []() -> fp80 { return cosl(to_rad_l(54U)); },
        []() -> fp80 { return cosl(to_rad_l(55U)); },
        []() -> fp80 { return cosl(to_rad_l(56U)); },
        []() -> fp80 { return cosl(to_rad_l(57U)); },
        []() -> fp80 { return cosl(to_rad_l(58U)); },
        []() -> fp80 { return cosl(to_rad_l(59U)); },
        []() -> fp80 { return cosl(to_rad_l(60U)); },
        []() -> fp80 { return cosl(to_rad_l(61U)); },
        []() -> fp80 { return cosl(to_rad_l(62U)); },
        []() -> fp80 { return cosl(to_rad_l(63U)); },
        []() -> fp80 { return cosl(to_rad_l(64U)); },
        []() -> fp80 { return cosl(to_rad_l(65U)); },
        []() -> fp80 { return cosl(to_rad_l(66U)); },
        []() -> fp80 { return cosl(to_rad_l(67U)); },
        []() -> fp80 { return cosl(to_rad_l(68U)); },
        []() -> fp80 { return cosl(to_rad_l(69U)); },
        []() -> fp80 { return cosl(to_rad_l(70U)); },
        []() -> fp80 { return cosl(to_rad_l(71U)); },
        []() -> fp80 { return cosl(to_rad_l(72U)); },
        []() -> fp80 { return cosl(to_rad_l(73U)); },
        []() -> fp80 { return cosl(to_rad_l(74U)); },
        []() -> fp80 { return cosl(to_rad_l(75U)); },
        []() -> fp80 { return cosl(to_rad_l(76U)); },
        []() -> fp80 { return cosl(to_rad_l(77U)); },
        []() -> fp80 { return cosl(to_rad_l(78U)); },
        []() -> fp80 { return cosl(to_rad_l(79U)); },
        []() -> fp80 { return cosl(to_rad_l(80U)); },
        []() -> fp80 { return cosl(to_rad_l(81U)); },
        []() -> fp80 { return cosl(to_rad_l(82U)); },
        []() -> fp80 { return cosl(to_rad_l(83U)); },
        []() -> fp80 { return cosl(to_rad_l(84U)); },
        []() -> fp80 { return cosl(to_rad_l(85U)); },
        []() -> fp80 { return cosl(to_rad_l(86U)); },
        []() -> fp80 { return cosl(to_rad_l(87U)); },
        []() -> fp80 { return cosl(to_rad_l(88U)); },
        []() -> fp80 { return cosl(to_rad_l(89U)); },
        []() -> fp80 { return cosl(to_rad_l(90U)); },
        []() -> fp80 { return cosl(to_rad_l(91U)); },
        []() -> fp80 { return cosl(to_rad_l(92U)); },
        []() -> fp80 { return cosl(to_rad_l(93U)); },
        []() -> fp80 { return cosl(to_rad_l(94U)); },
        []() -> fp80 { return cosl(to_rad_l(95U)); },
        []() -> fp80 { return cosl(to_rad_l(96U)); },
        []() -> fp80 { return cosl(to_rad_l(97U)); },
        []() -> fp80 { return cosl(to_rad_l(98U)); },
        []() -> fp80 { return cosl(to_rad_l(99U)); },
        []() -> fp80 { return cosl(to_rad_l(100U)); },
        []() -> fp80 { return cosl(to_rad_l(101U)); },
        []() -> fp80 { return cosl(to_rad_l(102U)); },
        []() -> fp80 { return cosl(to_rad_l(103U)); },
        []() -> fp80 { return cosl(to_rad_l(104U)); },
        []() -> fp80 { return cosl(to_rad_l(105U)); },
        []() -> fp80 { return cosl(to_rad_l(106U)); },
        []() -> fp80 { return cosl(to_rad_l(107U)); },
        []() -> fp80 { return cosl(to_rad_l(108U)); },
        []() -> fp80 { return cosl(to_rad_l(109U)); },
        []() -> fp80 { return cosl(to_rad_l(110U)); },
        []() -> fp80 { return cosl(to_rad_l(111U)); },
        []() -> fp80 { return cosl(to_rad_l(112U)); },
        []() -> fp80 { return cosl(to_rad_l(113U)); },
        []() -> fp80 { return cosl(to_rad_l(114U)); },
        []() -> fp80 { return cosl(to_rad_l(115U)); },
        []() -> fp80 { return cosl(to_rad_l(116U)); },
        []() -> fp80 { return cosl(to_rad_l(117U)); },
        []() -> fp80 { return cosl(to_rad_l(118U)); },
        []() -> fp80 { return cosl(to_rad_l(119U)); },
        []() -> fp80 { return cosl(to_rad_l(120U)); },
        []() -> fp80 { return cosl(to_rad_l(121U)); },
        []() -> fp80 { return cosl(to_rad_l(122U)); },
        []() -> fp80 { return cosl(to_rad_l(123U)); },
        []() -> fp80 { return cosl(to_rad_l(124U)); },
        []() -> fp80 { return cosl(to_rad_l(125U)); },
        []() -> fp80 { return cosl(to_rad_l(126U)); },
        []() -> fp80 { return cosl(to_rad_l(127U)); },
        []() -> fp80 { return cosl(to_rad_l(128U)); },
        []() -> fp80 { return cosl(to_rad_l(129U)); },
        []() -> fp80 { return cosl(to_rad_l(130U)); },
        []() -> fp80 { return cosl(to_rad_l(131U)); },
        []() -> fp80 { return cosl(to_rad_l(132U)); },
        []() -> fp80 { return cosl(to_rad_l(133U)); },
        []() -> fp80 { return cosl(to_rad_l(134U)); },
        []() -> fp80 { return cosl(to_rad_l(135U)); },
        []() -> fp80 { return cosl(to_rad_l(136U)); },
        []() -> fp80 { return cosl(to_rad_l(137U)); },
        []() -> fp80 { return cosl(to_rad_l(138U)); },
        []() -> fp80 { return cosl(to_rad_l(139U)); },
        []() -> fp80 { return cosl(to_rad_l(140U)); },
        []() -> fp80 { return cosl(to_rad_l(141U)); },
        []() -> fp80 { return cosl(to_rad_l(142U)); },
        []() -> fp80 { return cosl(to_rad_l(143U)); },
        []() -> fp80 { return cosl(to_rad_l(144U)); },
        []() -> fp80 { return cosl(to_rad_l(145U)); },
        []() -> fp80 { return cosl(to_rad_l(146U)); },
        []() -> fp80 { return cosl(to_rad_l(147U)); },
        []() -> fp80 { return cosl(to_rad_l(148U)); },
        []() -> fp80 { return cosl(to_rad_l(149U)); },
        []() -> fp80 { return cosl(to_rad_l(150U)); },
        []() -> fp80 { return cosl(to_rad_l(151U)); },
        []() -> fp80 { return cosl(to_rad_l(152U)); },
        []() -> fp80 { return cosl(to_rad_l(153U)); },
        []() -> fp80 { return cosl(to_rad_l(154U)); },
        []() -> fp80 { return cosl(to_rad_l(155U)); },
        []() -> fp80 { return cosl(to_rad_l(156U)); },
        []() -> fp80 { return cosl(to_rad_l(157U)); },
        []() -> fp80 { return cosl(to_rad_l(158U)); },
        []() -> fp80 { return cosl(to_rad_l(159U)); },
        []() -> fp80 { return cosl(to_rad_l(160U)); },
        []() -> fp80 { return cosl(to_rad_l(161U)); },
        []() -> fp80 { return cosl(to_rad_l(162U)); },
        []() -> fp80 { return cosl(to_rad_l(163U)); },
        []() -> fp80 { return cosl(to_rad_l(164U)); },
        []() -> fp80 { return cosl(to_rad_l(165U)); },
        []() -> fp80 { return cosl(to_rad_l(166U)); },
        []() -> fp80 { return cosl(to_rad_l(167U)); },
        []() -> fp80 { return cosl(to_rad_l(168U)); },
        []() -> fp80 { return cosl(to_rad_l(169U)); },
        []() -> fp80 { return cosl(to_rad_l(170U)); },
        []() -> fp80 { return cosl(to_rad_l(171U)); },
        []() -> fp80 { return cosl(to_rad_l(172U)); },
        []() -> fp80 { return cosl(to_rad_l(173U)); },
        []() -> fp80 { return cosl(to_rad_l(174U)); },
        []() -> fp80 { return cosl(to_rad_l(175U)); },
        []() -> fp80 { return cosl(to_rad_l(176U)); },
        []() -> fp80 { return cosl(to_rad_l(177U)); },
        []() -> fp80 { return cosl(to_rad_l(178U)); },
        []() -> fp80 { return cosl(to_rad_l(179U)); },
        []() -> fp80 { return cosl(to_rad_l(180U)); },
        []() -> fp80 { return cosl(to_rad_l(181U)); },
        []() -> fp80 { return cosl(to_rad_l(182U)); },
        []() -> fp80 { return cosl(to_rad_l(183U)); },
        []() -> fp80 { return cosl(to_rad_l(184U)); },
        []() -> fp80 { return cosl(to_rad_l(185U)); },
        []() -> fp80 { return cosl(to_rad_l(186U)); },
        []() -> fp80 { return cosl(to_rad_l(187U)); },
        []() -> fp80 { return cosl(to_rad_l(188U)); },
        []() -> fp80 { return cosl(to_rad_l(189U)); },
        []() -> fp80 { return cosl(to_rad_l(190U)); },
        []() -> fp80 { return cosl(to_rad_l(191U)); },
        []() -> fp80 { return cosl(to_rad_l(192U)); },
        []() -> fp80 { return cosl(to_rad_l(193U)); },
        []() -> fp80 { return cosl(to_rad_l(194U)); },
        []() -> fp80 { return cosl(to_rad_l(195U)); },
        []() -> fp80 { return cosl(to_rad_l(196U)); },
        []() -> fp80 { return cosl(to_rad_l(197U)); },
        []() -> fp80 { return cosl(to_rad_l(198U)); },
        []() -> fp80 { return cosl(to_rad_l(199U)); },
        []() -> fp80 { return cosl(to_rad_l(200U)); },
        []() -> fp80 { return cosl(to_rad_l(201U)); },
        []() -> fp80 { return cosl(to_rad_l(202U)); },
        []() -> fp80 { return cosl(to_rad_l(203U)); },
        []() -> fp80 { return cosl(to_rad_l(204U)); },
        []() -> fp80 { return cosl(to_rad_l(205U)); },
        []() -> fp80 { return cosl(to_rad_l(206U)); },
        []() -> fp80 { return cosl(to_rad_l(207U)); },
        []() -> fp80 { return cosl(to_rad_l(208U)); },
        []() -> fp80 { return cosl(to_rad_l(209U)); },
        []() -> fp80 { return cosl(to_rad_l(210U)); },
        []() -> fp80 { return cosl(to_rad_l(211U)); },
        []() -> fp80 { return cosl(to_rad_l(212U)); },
        []() -> fp80 { return cosl(to_rad_l(213U)); },
        []() -> fp80 { return cosl(to_rad_l(214U)); },
        []() -> fp80 { return cosl(to_rad_l(215U)); },
        []() -> fp80 { return cosl(to_rad_l(216U)); },
        []() -> fp80 { return cosl(to_rad_l(217U)); },
        []() -> fp80 { return cosl(to_rad_l(218U)); },
        []() -> fp80 { return cosl(to_rad_l(219U)); },
        []() -> fp80 { return cosl(to_rad_l(220U)); },
        []() -> fp80 { return cosl(to_rad_l(221U)); },
        []() -> fp80 { return cosl(to_rad_l(222U)); },
        []() -> fp80 { return cosl(to_rad_l(223U)); },
        []() -> fp80 { return cosl(to_rad_l(224U)); },
        []() -> fp80 { return cosl(to_rad_l(225U)); },
        []() -> fp80 { return cosl(to_rad_l(226U)); },
        []() -> fp80 { return cosl(to_rad_l(227U)); },
        []() -> fp80 { return cosl(to_rad_l(228U)); },
        []() -> fp80 { return cosl(to_rad_l(229U)); },
        []() -> fp80 { return cosl(to_rad_l(230U)); },
        []() -> fp80 { return cosl(to_rad_l(231U)); },
        []() -> fp80 { return cosl(to_rad_l(232U)); },
        []() -> fp80 { return cosl(to_rad_l(233U)); },
        []() -> fp80 { return cosl(to_rad_l(234U)); },
        []() -> fp80 { return cosl(to_rad_l(235U)); },
        []() -> fp80 { return cosl(to_rad_l(236U)); },
        []() -> fp80 { return cosl(to_rad_l(237U)); },
        []() -> fp80 { return cosl(to_rad_l(238U)); },
        []() -> fp80 { return cosl(to_rad_l(239U)); },
        []() -> fp80 { return cosl(to_rad_l(240U)); },
        []() -> fp80 { return cosl(to_rad_l(241U)); },
        []() -> fp80 { return cosl(to_rad_l(242U)); },
        []() -> fp80 { return cosl(to_rad_l(243U)); },
        []() -> fp80 { return cosl(to_rad_l(244U)); },
        []() -> fp80 { return cosl(to_rad_l(245U)); },
        []() -> fp80 { return cosl(to_rad_l(246U)); },
        []() -> fp80 { return cosl(to_rad_l(247U)); },
        []() -> fp80 { return cosl(to_rad_l(248U)); },
        []() -> fp80 { return cosl(to_rad_l(249U)); },
        []() -> fp80 { return cosl(to_rad_l(250U)); },
        []() -> fp80 { return cosl(to_rad_l(251U)); },
        []() -> fp80 { return cosl(to_rad_l(252U)); },
        []() -> fp80 { return cosl(to_rad_l(253U)); },
        []() -> fp80 { return cosl(to_rad_l(254U)); },
        []() -> fp80 { return cosl(to_rad_l(255U)); },
        []() -> fp80 { return cosl(to_rad_l(256U)); },
        []() -> fp80 { return cosl(to_rad_l(257U)); },
        []() -> fp80 { return cosl(to_rad_l(258U)); },
        []() -> fp80 { return cosl(to_rad_l(259U)); },
        []() -> fp80 { return cosl(to_rad_l(260U)); },
        []() -> fp80 { return cosl(to_rad_l(261U)); },
        []() -> fp80 { return cosl(to_rad_l(262U)); },
        []() -> fp80 { return cosl(to_rad_l(263U)); },
        []() -> fp80 { return cosl(to_rad_l(264U)); },
        []() -> fp80 { return cosl(to_rad_l(265U)); },
        []() -> fp80 { return cosl(to_rad_l(266U)); },
        []() -> fp80 { return cosl(to_rad_l(267U)); },
        []() -> fp80 { return cosl(to_rad_l(268U)); },
        []() -> fp80 { return cosl(to_rad_l(269U)); },
        []() -> fp80 { return cosl(to_rad_l(270U)); },
        []() -> fp80 { return cosl(to_rad_l(271U)); },
        []() -> fp80 { return cosl(to_rad_l(272U)); },
        []() -> fp80 { return cosl(to_rad_l(273U)); },
        []() -> fp80 { return cosl(to_rad_l(274U)); },
        []() -> fp80 { return cosl(to_rad_l(275U)); },
        []() -> fp80 { return cosl(to_rad_l(276U)); },
        []() -> fp80 { return cosl(to_rad_l(277U)); },
        []() -> fp80 { return cosl(to_rad_l(278U)); },
        []() -> fp80 { return cosl(to_rad_l(279U)); },
        []() -> fp80 { return cosl(to_rad_l(280U)); },
        []() -> fp80 { return cosl(to_rad_l(281U)); },
        []() -> fp80 { return cosl(to_rad_l(282U)); },
        []() -> fp80 { return cosl(to_rad_l(283U)); },
        []() -> fp80 { return cosl(to_rad_l(284U)); },
        []() -> fp80 { return cosl(to_rad_l(285U)); },
        []() -> fp80 { return cosl(to_rad_l(286U)); },
        []() -> fp80 { return cosl(to_rad_l(287U)); },
        []() -> fp80 { return cosl(to_rad_l(288U)); },
        []() -> fp80 { return cosl(to_rad_l(289U)); },
        []() -> fp80 { return cosl(to_rad_l(290U)); },
        []() -> fp80 { return cosl(to_rad_l(291U)); },
        []() -> fp80 { return cosl(to_rad_l(292U)); },
        []() -> fp80 { return cosl(to_rad_l(293U)); },
        []() -> fp80 { return cosl(to_rad_l(294U)); },
        []() -> fp80 { return cosl(to_rad_l(295U)); },
        []() -> fp80 { return cosl(to_rad_l(296U)); },
        []() -> fp80 { return cosl(to_rad_l(297U)); },
        []() -> fp80 { return cosl(to_rad_l(298U)); },
        []() -> fp80 { return cosl(to_rad_l(299U)); },
        []() -> fp80 { return cosl(to_rad_l(300U)); },
        []() -> fp80 { return cosl(to_rad_l(301U)); },
        []() -> fp80 { return cosl(to_rad_l(302U)); },
        []() -> fp80 { return cosl(to_rad_l(303U)); },
        []() -> fp80 { return cosl(to_rad_l(304U)); },
        []() -> fp80 { return cosl(to_rad_l(305U)); },
        []() -> fp80 { return cosl(to_rad_l(306U)); },
        []() -> fp80 { return cosl(to_rad_l(307U)); },
        []() -> fp80 { return cosl(to_rad_l(308U)); },
        []() -> fp80 { return cosl(to_rad_l(309U)); },
        []() -> fp80 { return cosl(to_rad_l(310U)); },
        []() -> fp80 { return cosl(to_rad_l(311U)); },
        []() -> fp80 { return cosl(to_rad_l(312U)); },
        []() -> fp80 { return cosl(to_rad_l(313U)); },
        []() -> fp80 { return cosl(to_rad_l(314U)); },
        []() -> fp80 { return cosl(to_rad_l(315U)); },
        []() -> fp80 { return cosl(to_rad_l(316U)); },
        []() -> fp80 { return cosl(to_rad_l(317U)); },
        []() -> fp80 { return cosl(to_rad_l(318U)); },
        []() -> fp80 { return cosl(to_rad_l(319U)); },
        []() -> fp80 { return cosl(to_rad_l(320U)); },
        []() -> fp80 { return cosl(to_rad_l(321U)); },
        []() -> fp80 { return cosl(to_rad_l(322U)); },
        []() -> fp80 { return cosl(to_rad_l(323U)); },
        []() -> fp80 { return cosl(to_rad_l(324U)); },
        []() -> fp80 { return cosl(to_rad_l(325U)); },
        []() -> fp80 { return cosl(to_rad_l(326U)); },
        []() -> fp80 { return cosl(to_rad_l(327U)); },
        []() -> fp80 { return cosl(to_rad_l(328U)); },
        []() -> fp80 { return cosl(to_rad_l(329U)); },
        []() -> fp80 { return cosl(to_rad_l(330U)); },
        []() -> fp80 { return cosl(to_rad_l(331U)); },
        []() -> fp80 { return cosl(to_rad_l(332U)); },
        []() -> fp80 { return cosl(to_rad_l(333U)); },
        []() -> fp80 { return cosl(to_rad_l(334U)); },
        []() -> fp80 { return cosl(to_rad_l(335U)); },
        []() -> fp80 { return cosl(to_rad_l(336U)); },
        []() -> fp80 { return cosl(to_rad_l(337U)); },
        []() -> fp80 { return cosl(to_rad_l(338U)); },
        []() -> fp80 { return cosl(to_rad_l(339U)); },
        []() -> fp80 { return cosl(to_rad_l(340U)); },
        []() -> fp80 { return cosl(to_rad_l(341U)); },
        []() -> fp80 { return cosl(to_rad_l(342U)); },
        []() -> fp80 { return cosl(to_rad_l(343U)); },
        []() -> fp80 { return cosl(to_rad_l(344U)); },
        []() -> fp80 { return cosl(to_rad_l(345U)); },
        []() -> fp80 { return cosl(to_rad_l(346U)); },
        []() -> fp80 { return cosl(to_rad_l(347U)); },
        []() -> fp80 { return cosl(to_rad_l(348U)); },
        []() -> fp80 { return cosl(to_rad_l(349U)); },
        []() -> fp80 { return cosl(to_rad_l(350U)); },
        []() -> fp80 { return cosl(to_rad_l(351U)); },
        []() -> fp80 { return cosl(to_rad_l(352U)); },
        []() -> fp80 { return cosl(to_rad_l(353U)); },
        []() -> fp80 { return cosl(to_rad_l(354U)); },
        []() -> fp80 { return cosl(to_rad_l(355U)); },
        []() -> fp80 { return cosl(to_rad_l(356U)); },
        []() -> fp80 { return cosl(to_rad_l(357U)); },
        []() -> fp80 { return cosl(to_rad_l(358U)); },
        []() -> fp80 { return cosl(to_rad_l(359U)); },
        []() -> fp80 { return cosl(to_rad_l(360U)); }
    };
}
