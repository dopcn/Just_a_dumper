//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVDynamicView.h"

#import "KTVNearbySiteHeaderViewDelegate-Protocol.h"

@class KTVNearbySiteHeaderView, NSString;

@interface KTVDynamicTangView : KTVDynamicView <KTVNearbySiteHeaderViewDelegate>
{
    KTVNearbySiteHeaderView *_headerView;
}

@property(retain, nonatomic) KTVNearbySiteHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)siteHeaderView:(id)arg1 eventType:(unsigned long long)arg2 tangInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

