//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDCodEarphoneBaseViewController.h"

@class CDCodEarphoneChooseSportModelView, JTButton;

@interface CDCodEarphoneChooseSportModelViewController : CDCodEarphoneBaseViewController
{
    CDCodEarphoneChooseSportModelView *_normalChooseView;
    CDCodEarphoneChooseSportModelView *_sportChooseView;
    JTButton *_nextStepButton;
}

@property(nonatomic) __weak JTButton *nextStepButton; // @synthesize nextStepButton=_nextStepButton;
@property(nonatomic) __weak CDCodEarphoneChooseSportModelView *sportChooseView; // @synthesize sportChooseView=_sportChooseView;
@property(nonatomic) __weak CDCodEarphoneChooseSportModelView *normalChooseView; // @synthesize normalChooseView=_normalChooseView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)pageAttribuite;
- (void)nextStepButtonAction:(id)arg1;
- (void)viewDidLoad;

@end

