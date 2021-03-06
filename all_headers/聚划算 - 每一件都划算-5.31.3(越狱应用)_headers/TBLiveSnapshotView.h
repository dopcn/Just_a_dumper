//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, UIButton;
@protocol OS_dispatch_queue, TBLiveSnapshotDelegate;

@interface TBLiveSnapshotView : UIView
{
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    id <TBLiveSnapshotDelegate> _delegate;
    UIButton *_okButton;
    UIButton *_cancelButton;
    UIView *_photoView;
    struct CGPoint _starPoint;
}

@property(nonatomic) struct CGPoint starPoint; // @synthesize starPoint=_starPoint;
@property(retain, nonatomic) UIView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak id <TBLiveSnapshotDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // @synthesize delegateCallbackQueue=_delegateCallbackQueue;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (void)onCancelCallBack:(id)arg1;
- (void)onOkCallBack:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

