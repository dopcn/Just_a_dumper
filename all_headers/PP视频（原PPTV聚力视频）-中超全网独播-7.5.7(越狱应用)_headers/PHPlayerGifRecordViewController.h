//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PCMyPlayerViewWrapper, PHPlayerGifRecordView;

@interface PHPlayerGifRecordViewController : UIViewController
{
    PCMyPlayerViewWrapper *_myPlayerViewWrapper;
    CDUnknownBlockType _exitBlock;
    PHPlayerGifRecordView *_rootView;
}

@property(retain, nonatomic) PHPlayerGifRecordView *rootView; // @synthesize rootView=_rootView;
@property(copy, nonatomic) CDUnknownBlockType exitBlock; // @synthesize exitBlock=_exitBlock;
@property(nonatomic) __weak PCMyPlayerViewWrapper *myPlayerViewWrapper; // @synthesize myPlayerViewWrapper=_myPlayerViewWrapper;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)endRecord;
- (void)startRecord;
- (void)exit;
- (void)addClickAction;
- (void)viewDidLoad;
- (void)loadView;

@end

