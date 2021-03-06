//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVBaseViewController.h"

#import "ELTraceable-Protocol.h"

@class KTVEmptyView, NSString;

@interface ELBaseViewController : KTVBaseViewController <ELTraceable>
{
    _Bool _visible;
    KTVEmptyView *_emptyView;
    NSString *_source;
}

+ (id)visibleViewController;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) KTVEmptyView *emptyView; // @synthesize emptyView=_emptyView;
- (void).cxx_destruct;
- (void)createUI;
- (void)hideEmptyView;
- (void)showEmptyView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

