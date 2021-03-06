//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CartoonBasePopViewController.h"

#import "CartoonAlertViewDelegate-Protocol.h"

@class CartoonAlertAction, NSMutableArray, NSString, UIView;

@interface CartoonAlertController : CartoonBasePopViewController <CartoonAlertViewDelegate>
{
    NSString *_alertTitle;
    NSString *_message;
    CartoonAlertAction *_confirmAction;
    CartoonAlertAction *_cancelAction;
    UIView *_customView;
    NSMutableArray *_actions;
}

+ (id)alertControllerCustomView:(id)arg1;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 confirmAction:(id)arg3 cancelAction:(id)arg4;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) CartoonAlertAction *cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain, nonatomic) CartoonAlertAction *confirmAction; // @synthesize confirmAction=_confirmAction;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1;
- (void)alertView:(id)arg1 didClickButtonWithAction:(id)arg2;
- (id)containerView;
- (void)addAction:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 customView:(id)arg3 confirmAction:(id)arg4 cancelAction:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

