//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol KSNovelModel><Optional, Optional;

@interface KSBookstoreAllBookModel : JSONModel
{
    NSString<Optional> *_status;
    NSString<Optional> *_count;
    NSString<Optional> *_isEnd;
    NSArray<KSNovelModel><Optional> *_content;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSArray<KSNovelModel><Optional> *content; // @synthesize content=_content;
@property(nonatomic) NSString<Optional> *isEnd; // @synthesize isEnd=_isEnd;
@property(nonatomic) NSString<Optional> *count; // @synthesize count=_count;
@property(retain, nonatomic) NSString<Optional> *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

