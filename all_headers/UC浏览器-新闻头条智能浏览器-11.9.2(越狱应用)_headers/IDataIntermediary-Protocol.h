//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NBBookDataProvider, NBBookItem;
@protocol NBChapterItemProtocol;

@protocol IDataIntermediary <NSObject>
- (_Bool)isChapterItemEqual:(id <NBChapterItemProtocol>)arg1 toChapterItem:(id <NBChapterItemProtocol>)arg2;
- (void)saveReadProgressInfo:(id <NBChapterItemProtocol>)arg1 pageIndex:(long long)arg2 offset:(long long)arg3 forBookItem:(NBBookItem *)arg4;
- (id <NBChapterItemProtocol>)getReadProgressChapterFromBookItem:(NBBookItem *)arg1 provider:(NBBookDataProvider *)arg2;

@optional
- (_Bool)isCoverPageChapter:(id <NBChapterItemProtocol>)arg1;
- (_Bool)shouldShowTrascodingView:(id <NBChapterItemProtocol>)arg1;
@end

