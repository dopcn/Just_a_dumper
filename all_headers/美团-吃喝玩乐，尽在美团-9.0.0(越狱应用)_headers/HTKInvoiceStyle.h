//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTKInvoiceStyleProtocolRequired-Protocol.h"

@class NSString;

@interface HTKInvoiceStyle : NSObject <HTKInvoiceStyleProtocolRequired>
{
}

+ (id)photoViewControllerWithURLString:(id)arg1;
+ (id)backBarButtonItemTarget:(id)arg1 action:(SEL)arg2;
+ (void)showAddressChooseViewWithAddress:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (id)defaultBtn;
+ (id)switchCellTipsColorWithState:(_Bool)arg1;
+ (id)switchCellLabelColorWithState:(_Bool)arg1;
+ (id)switchCellBgColorWithState:(_Bool)arg1;
+ (id)switchCellBorderColorWithState:(_Bool)arg1;
+ (id)checkBoxImageWithState:(_Bool)arg1;
+ (id)tintColor;
+ (id)photoViewControllerWithURLString:(id)arg1;
+ (id)backBarButtonItemTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

