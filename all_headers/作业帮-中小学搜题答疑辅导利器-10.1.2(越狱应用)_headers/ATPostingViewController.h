//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ATPostBaseViewController.h"

#import "NormalBussinessImageViewDelegate-Protocol.h"

@class ATPostingInputView, ATPostingViewModel, NSArray, NSString;

@interface ATPostingViewController : ATPostBaseViewController <NormalBussinessImageViewDelegate>
{
    ATPostingInputView *_inputView;
    ATPostingViewModel *_viewModel;
    long long _cid;
    NSArray *_sections;
}

+ (id)getToRegisterUrl;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) long long cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (void)imagePickerViewCancel:(id)arg1;
- (void)imagePickerView:(id)arg1 didPickerImage:(id)arg2 frame:(struct CGRect)arg3;
- (void)showBigImageView:(id)arg1 pic:(id)arg2;
- (void)deleteImage;
- (void)quanPostViewTakePic;
- (void)sendPost;
- (void)goDetailWithQid:(id)arg1;
- (void)naviRightAction;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

