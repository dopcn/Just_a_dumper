//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class JDButton, JdShipmentModel, NSString, UILabel;
@protocol ChooseShipmentDateDelegate;

@interface ShipmentPromise411View : JDView
{
    UILabel *message_;
    JDButton *checkbox_;
    NSString *_identifier;
    JdShipmentModel *_jdShipModel;
    id <ChooseShipmentDateDelegate> _chooseShipDateDelegate;
}

@property(nonatomic) __weak id <ChooseShipmentDateDelegate> chooseShipDateDelegate; // @synthesize chooseShipDateDelegate=_chooseShipDateDelegate;
@property(retain, nonatomic) JdShipmentModel *jdShipModel; // @synthesize jdShipModel=_jdShipModel;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)jdIconClick:(id)arg1;
- (void)enableCheckBox:(_Bool)arg1;
- (_Bool)isSelected;
- (void)setSelected:(_Bool)arg1;
- (void)setMessage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

