//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMSResourceDataBase.h"

@class NFSubscribeMenuTabItemInfo;

@interface CMSSubscribeMenuTabData : CMSResourceDataBase
{
    NFSubscribeMenuTabItemInfo *_itemInfo;
}

@property(retain, nonatomic) NFSubscribeMenuTabItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
- (id)popImageWithResURL:(id)arg1 relPath:(id)arg2;
- (id)downloadConfig;
- (void)fillBizData:(id)arg1;
- (void)dealloc;

@end

