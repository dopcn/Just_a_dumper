//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol NBChapterItemProtocol, NBChaptersInfoProtocol;

@protocol NBPAPageIndexProviderDelegate <NSObject>
- (_Bool)isReadingChapterInfo;
- (id <NBChapterItemProtocol>)getChapterItem:(long long)arg1;
- (id <NBChaptersInfoProtocol>)getChapterInfo;
- (long long)getChapterCount;
- (long long)getPageCountWithChapter:(id <NBChapterItemProtocol>)arg1;
@end

