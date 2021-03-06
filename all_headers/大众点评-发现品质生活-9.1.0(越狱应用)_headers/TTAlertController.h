//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSArray, NSString, TTAlertAction, TTExtendedAlertController, UIActionSheet, UIAlertView, UITextField, UIView;

@interface TTAlertController : NSObject <UIActionSheetDelegate, UIAlertViewDelegate>
{
    struct {
        unsigned int isShowingAlert:1;
    } _flags;
    NSArray *_actions;
    NSString *_title;
    NSString *_message;
    long long _preferredStyle;
    NSArray *_willDismissBlocks;
    NSArray *_didDismissBlocks;
    TTExtendedAlertController *_alertController;
    TTAlertAction *_executedAlertAction;
    NSArray *_textFieldHandlers;
    UIView *_strongSheetStorage;
    UIView *_weakSheetStorage;
}

+ (_Bool)hasVisibleAlertController;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
+ (id)presentDismissableAlertWithTitle:(id)arg1 error:(id)arg2 controller:(id)arg3;
+ (id)presentDismissableAlertWithTitle:(id)arg1 message:(id)arg2 controller:(id)arg3;
+ (id)actionSheetWithTitle:(id)arg1;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2;
+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak UIView *weakSheetStorage; // @synthesize weakSheetStorage=_weakSheetStorage;
@property(retain, nonatomic) UIView *strongSheetStorage; // @synthesize strongSheetStorage=_strongSheetStorage;
@property(copy, nonatomic) NSArray *textFieldHandlers; // @synthesize textFieldHandlers=_textFieldHandlers;
@property(nonatomic) __weak TTAlertAction *executedAlertAction; // @synthesize executedAlertAction=_executedAlertAction;
@property(retain, nonatomic) TTExtendedAlertController *alertController; // @synthesize alertController=_alertController;
@property(copy, nonatomic) NSArray *didDismissBlocks; // @synthesize didDismissBlocks=_didDismissBlocks;
@property(copy, nonatomic) NSArray *willDismissBlocks; // @synthesize willDismissBlocks=_willDismissBlocks;
@property(readonly, nonatomic) long long preferredStyle; // @synthesize preferredStyle=_preferredStyle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)viewDidDismissWithButtonIndex:(long long)arg1;
- (void)viewWillDismissWithButtonIndex:(long long)arg1;
- (void)performBlocks:(id)arg1 withAction:(id)arg2;
- (id)actionForButtonIndex:(long long)arg1;
- (void)moveSheetToWeakStorage;
- (void)addDidDismissBlock:(CDUnknownBlockType)arg1;
- (void)addWillDismissBlock:(CDUnknownBlockType)arg1;
- (id)presentedObject;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showActionSheetWithSender:(id)arg1 fallbackView:(id)arg2 animated:(_Bool)arg3;
- (void)setIsShowingAlert:(_Bool)arg1;
- (void)showWithSender:(id)arg1 arrowDirection:(unsigned long long)arg2 controller:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showWithSender:(id)arg1 controller:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic) UITextField *textField;
@property(readonly, nonatomic) NSArray *textFields;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;
- (void)addAction:(id)arg1;
@property(readonly, nonatomic) UIActionSheet *actionSheet;
@property(readonly, nonatomic) UIAlertView *alertView;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
- (id)init;
- (_Bool)alertControllerAvailable;
- (void)addCancelActionWithHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

