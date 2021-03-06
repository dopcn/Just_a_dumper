//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBAUIViewController.h"

#import "BBAImageSearchNetControllerDelegate-Protocol.h"

@class BBAImageSearchNetController, NSMutableArray, NSString, UIButton;

@interface BBAPixelSearchTranslateFinalViewController : BBAUIViewController <BBAImageSearchNetControllerDelegate>
{
    NSMutableArray *_transDataArray;
    NSString *_querySign;
    UIButton *_feedbackButton;
    BBAImageSearchNetController *_netController;
}

@property(retain, nonatomic) BBAImageSearchNetController *netController; // @synthesize netController=_netController;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) NSString *querySign; // @synthesize querySign=_querySign;
@property(retain, nonatomic) NSMutableArray *transDataArray; // @synthesize transDataArray=_transDataArray;
- (void).cxx_destruct;
- (void)onFeedbackButtonClicked:(id)arg1;
- (void)imageSearchNetManagerDownloadErr:(id)arg1;
- (void)imageSearchNetManagerDownloadFinish:(id)arg1 data:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)translateBoxView;
- (id)seperateLineView;
- (void)loadFeedbackButton;
- (void)loadMainView;
- (void)loadView;
- (id)initWithTransParser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

