//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface YYResourceMetaData : NSObject
{
    NSMutableArray *_fileItems;
    NSString *_lastDownloadUrl;
}

+ (id)mergeWithOld:(id)arg1 new:(id)arg2;
@property(retain, nonatomic) NSString *lastDownloadUrl; // @synthesize lastDownloadUrl=_lastDownloadUrl;
- (void).cxx_destruct;
- (id)saveToJsonData;
- (_Bool)loadFromJsonData:(id)arg1;
- (id)initWithFileItems:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSArray *fileItems;

@end

