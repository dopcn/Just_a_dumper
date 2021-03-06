//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIViewController, WFKAlertController;

@interface WFKAlertMaker : NSObject
{
    long long _style;
    NSString *_title;
    NSString *_message;
    NSString *_destructiveTitle;
    NSString *_cancelTitle;
    NSArray *_otherTitles;
    CDUnknownBlockType _defaultHandler;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _destructiveHandler;
    UIViewController *_viewController;
    WFKAlertController *_alert;
}

@property(retain, nonatomic) WFKAlertController *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType destructiveHandler; // @synthesize destructiveHandler=_destructiveHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType defaultHandler; // @synthesize defaultHandler=_defaultHandler;
@property(retain, nonatomic) NSArray *otherTitles; // @synthesize otherTitles=_otherTitles;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(copy, nonatomic) NSString *destructiveTitle; // @synthesize destructiveTitle=_destructiveTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)showAlert;
- (id)initWithViewController:(id)arg1;
- (void)setDefaultAction:(CDUnknownBlockType)arg1 forOtherTitles:(id)arg2;
- (void)setOtherTitles:(id)arg1 defaultHandler:(CDUnknownBlockType)arg2;
- (void)setDestructiveTitle:(id)arg1 destructiveHandler:(CDUnknownBlockType)arg2;
- (void)setCancelTitle:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;

@end

