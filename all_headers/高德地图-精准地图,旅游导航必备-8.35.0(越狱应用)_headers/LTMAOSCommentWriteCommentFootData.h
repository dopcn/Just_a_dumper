//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMAOSJSONModel.h"

@class NSArray, NSString;
@protocol LTMAOSCommentWriteCommentFootPoiData;

@interface LTMAOSCommentWriteCommentFootData : LTMAOSJSONModel
{
    NSString *_tag;
    NSString *_visited_num;
    NSArray<LTMAOSCommentWriteCommentFootPoiData> *_list;
}

@property(retain, nonatomic) NSArray<LTMAOSCommentWriteCommentFootPoiData> *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *visited_num; // @synthesize visited_num=_visited_num;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)hasFirstCommentInList;

@end

