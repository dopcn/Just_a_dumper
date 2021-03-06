//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WCCAccumulativeButtonDelegate-Protocol.h"

@class NSObject, NSString, UILabel, WCCAccumulativeButton;
@protocol QuantityControlDelegate;

@interface QuantityControlCell : UITableViewCell <WCCAccumulativeButtonDelegate>
{
    long long _quantity;
    float _unitPrice;
    long long _inventory;
    WCCAccumulativeButton *_quantityView;
    UILabel *_totalLabel;
    NSObject<QuantityControlDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<QuantityControlDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) WCCAccumulativeButton *quantityView; // @synthesize quantityView=_quantityView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property float unitPrice; // @synthesize unitPrice=_unitPrice;
@property long long inventory; // @synthesize inventory=_inventory;
- (void)updateQuantity:(long long)arg1;
- (void)onReduceButtonTouchDownIn:(id)arg1;
- (void)onPlusButtonTouchDownIn:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

