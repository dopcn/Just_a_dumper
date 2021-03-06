//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDContentItem.h"

@class COEntryLabel, COExceptionLabel, JDButton, NSDictionary, NSString, OrderPayShipMapModel, UIImageView, UILabel, UIView;

@interface OrderShipmentView : JDContentItem
{
    UILabel *_titleLabel;
    JDButton *_accessoryButton;
    UIView *_bottomSepartor;
    double _middleZoneWidth;
    UIView *_detailShipView;
    COEntryLabel *_entryLabel;
    COExceptionLabel *_exceptionLabel;
    NSString *_distributeType;
    NSString *_shipmentTypeName;
    NSDictionary *_entryDictionary;
    UILabel *_shipmentLabel;
    UILabel *_textLabel;
    UIImageView *_timeIconDetail;
    UILabel *_detailLabel;
    UILabel *_largeTextLabel;
    UILabel *_shipmentTipLabel;
    UILabel *_installTipLabel;
    OrderPayShipMapModel *_payshipModel;
}

+ (id)getInitLabelWithTextAlignmentRight;
+ (id)getInitLabelWithTextAlignmentLeft;
@property(retain, nonatomic) OrderPayShipMapModel *payshipModel; // @synthesize payshipModel=_payshipModel;
@property(retain, nonatomic) UILabel *installTipLabel; // @synthesize installTipLabel=_installTipLabel;
@property(retain, nonatomic) UILabel *shipmentTipLabel; // @synthesize shipmentTipLabel=_shipmentTipLabel;
@property(retain, nonatomic) UILabel *largeTextLabel; // @synthesize largeTextLabel=_largeTextLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIImageView *timeIconDetail; // @synthesize timeIconDetail=_timeIconDetail;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *shipmentLabel; // @synthesize shipmentLabel=_shipmentLabel;
@property(copy, nonatomic) NSDictionary *entryDictionary; // @synthesize entryDictionary=_entryDictionary;
@property(retain, nonatomic) NSString *shipmentTypeName; // @synthesize shipmentTypeName=_shipmentTypeName;
@property(readonly, nonatomic) NSString *distributeType; // @synthesize distributeType=_distributeType;
- (void).cxx_destruct;
- (void)setBottomLineHidden:(_Bool)arg1;
- (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2;
- (id)getBigItemInstallWithModel:(id)arg1;
- (id)getBigItemTextWithModel:(id)arg1;
- (id)getBigItemMessageWithModel:(id)arg1;
- (id)getDetailTipWithModel:(id)arg1;
- (id)getTextLabelTextWithModel:(id)arg1;
- (id)getExpressTipWithModel:(id)arg1;
- (id)getExpressNameWithModel:(id)arg1;
- (long long)getShipmentSytle;
- (void)signWeekendArray:(id)arg1 Label:(id)arg2;
- (id)getWeekendAttributedString:(id)arg1;
- (_Bool)weekendListContainAnyOneOfArray:(id)arg1;
- (void)refreshShipmentSubViews;
- (void)refreshBaseView;
- (void)refreshExceptionSubViewsWithExceptionType:(long long)arg1;
- (void)updateLabelFrame:(id)arg1 blewLabe:(id)arg2;
- (void)updateTipLabelFrame:(id)arg1 refrecenceLabel:(id)arg2;
- (void)updateTextLabelFrame:(id)arg1;
- (double)calHeightWithFontSize:(double)arg1;
- (struct CGSize)calSizeWithString:(id)arg1 width:(double)arg2 font:(id)arg3;
- (void)reSetTipLabel:(id)arg1 Origin:(struct CGPoint)arg2;
- (void)reSetTextLabel:(id)arg1 Origin:(struct CGPoint)arg2;
- (void)setupJDExpressLargeStyleUIWithOriginY:(double)arg1;
- (void)setupJDExpressStyleUIWithOriginY:(double)arg1;
- (void)setupMixExpressMixStyleUI;
- (void)setupMixExpressLargeStyleUI;
- (void)setupMixExpressStyleUI;
- (void)setupJDExpressMixStyleUI;
- (void)setupUIWithStyle:(long long)arg1;
- (void)initSbuViews;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)refreshViewWithOrderPayShipMapModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

