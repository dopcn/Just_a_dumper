//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CHouseWebViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString;

@interface CESFListH5ViewController : CHouseWebViewController <UIScrollViewDelegate>
{
    NSString *_currentESFListUrl;
}

@property(copy, nonatomic) NSString *currentESFListUrl; // @synthesize currentESFListUrl=_currentESFListUrl;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configTitleView;
- (void)configBarButtons;
- (id)initWithCurrentESFListUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

