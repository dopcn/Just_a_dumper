//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BrokePolylineView, NSDictionary;
@protocol BrokeAlertViewDelegate;

@interface BrokeAlertView : UIView
{
    id <BrokeAlertViewDelegate> _delegate;
    BrokePolylineView *_polylineView;
    NSDictionary *_dict;
}

@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) BrokePolylineView *polylineView; // @synthesize polylineView=_polylineView;
@property(nonatomic) __weak id <BrokeAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)click_cancelBtn;
- (void)click_articleBtn:(id)arg1;
- (void)click_productDetail;
- (void)click_brokePrice;
- (void)setUIWithData:(id)arg1;
- (void)removeCurrentView;
- (id)initWithDataDict:(id)arg1;

@end

