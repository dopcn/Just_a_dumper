//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormCell.h"

@class CAShapeLayer, CCBButton, CCBImageView, CCBLabel, CCBView, CCB_O_SJXE10, NSArray, NSMutableArray;
@protocol CCB_5_OneKeyPayment_EnvelopeCellDelegate;

@interface CCB_5_OneKeyPayment_EnvelopeCell : CCBFormCell
{
    _Bool _isExplore;
    unsigned long long _type;
    CDUnknownBlockType _reloadData;
    id <CCB_5_OneKeyPayment_EnvelopeCellDelegate> _buttonDelegate;
    CCBView *_envelopeView;
    CCBButton *_leftBtn;
    CCBButton *_rightBtn;
    NSArray *_buttonsArr;
    CCBLabel *_money;
    CCBButton *_explore;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_layer2;
    CCBLabel *_rmb;
    CCBLabel *_rmb2;
    CCBLabel *_europe;
    CCBLabel *_europe2;
    CCBLabel *_american;
    CCBLabel *_american2;
    CCB_O_SJXE10 *_SJXE10;
    CCBImageView *_closeImage;
    CCBImageView *_openImage;
    CCBButton *_bigBtn;
    NSMutableArray *_currArr;
    NSMutableArray *_valueArr;
}

+ (double)cellHeightForFormItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *valueArr; // @synthesize valueArr=_valueArr;
@property(retain, nonatomic) NSMutableArray *currArr; // @synthesize currArr=_currArr;
@property(retain, nonatomic) CCBButton *bigBtn; // @synthesize bigBtn=_bigBtn;
@property(retain, nonatomic) CCBImageView *openImage; // @synthesize openImage=_openImage;
@property(retain, nonatomic) CCBImageView *closeImage; // @synthesize closeImage=_closeImage;
@property(retain, nonatomic) CCB_O_SJXE10 *SJXE10; // @synthesize SJXE10=_SJXE10;
@property(retain, nonatomic) CCBLabel *american2; // @synthesize american2=_american2;
@property(retain, nonatomic) CCBLabel *american; // @synthesize american=_american;
@property(retain, nonatomic) CCBLabel *europe2; // @synthesize europe2=_europe2;
@property(retain, nonatomic) CCBLabel *europe; // @synthesize europe=_europe;
@property(retain, nonatomic) CCBLabel *rmb2; // @synthesize rmb2=_rmb2;
@property(retain, nonatomic) CCBLabel *rmb; // @synthesize rmb=_rmb;
@property(nonatomic) _Bool isExplore; // @synthesize isExplore=_isExplore;
@property(retain, nonatomic) CAShapeLayer *layer2; // @synthesize layer2=_layer2;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CCBButton *explore; // @synthesize explore=_explore;
@property(retain, nonatomic) CCBLabel *money; // @synthesize money=_money;
@property(retain, nonatomic) NSArray *buttonsArr; // @synthesize buttonsArr=_buttonsArr;
@property(retain, nonatomic) CCBButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) CCBButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) CCBView *envelopeView; // @synthesize envelopeView=_envelopeView;
@property(nonatomic) __weak id <CCB_5_OneKeyPayment_EnvelopeCellDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
@property(copy, nonatomic) CDUnknownBlockType reloadData; // @synthesize reloadData=_reloadData;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setFormItem:(id)arg1;
- (void)changeType:(id)arg1;
- (id)refreshCell:(id)arg1 LIST1:(id)arg2;
- (void)exploreTapHandler:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

