//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView, VSCheckoutAddressView, VSDeliveryAddress;
@protocol VSCheckoutAddressCellDelegate;

@interface VSCheckoutAddressCell : UITableViewCell
{
    id <VSCheckoutAddressCellDelegate> _delegate;
    UIView *_dottedLineView;
    VSDeliveryAddress *_userAddress;
    VSCheckoutAddressView *_checkoutaddressView;
}

@property(retain, nonatomic) VSCheckoutAddressView *checkoutaddressView; // @synthesize checkoutaddressView=_checkoutaddressView;
@property(retain, nonatomic) VSDeliveryAddress *userAddress; // @synthesize userAddress=_userAddress;
@property(retain, nonatomic) UIView *dottedLineView; // @synthesize dottedLineView=_dottedLineView;
@property(nonatomic) __weak id <VSCheckoutAddressCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)getViewHeight;
- (void)updataWithUserAddress:(id)arg1 viewType:(long long)arg2;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

