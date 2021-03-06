//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface MAYMovieBoard : MTLModel <MTLJSONSerializing>
{
    _Bool _shareHidden;
    _Bool _hasMore;
    _Bool _wantToSeeHidden;
    unsigned long long _boardType;
    long long _bid;
    NSString *_title;
    NSString *_summary;
    NSString *_content;
    NSString *_author;
    NSString *_createTime;
    NSString *_imageURL;
    NSArray *_movieList;
    NSArray *_celebrityList;
    long long _intermediateBoardID1;
    long long _intermediateBoardID2;
}

+ (id)celebrityListJSONTransformer;
+ (id)movieListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long intermediateBoardID2; // @synthesize intermediateBoardID2=_intermediateBoardID2;
@property(nonatomic) long long intermediateBoardID1; // @synthesize intermediateBoardID1=_intermediateBoardID1;
@property(nonatomic) _Bool wantToSeeHidden; // @synthesize wantToSeeHidden=_wantToSeeHidden;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool shareHidden; // @synthesize shareHidden=_shareHidden;
@property(retain, nonatomic) NSArray *celebrityList; // @synthesize celebrityList=_celebrityList;
@property(retain, nonatomic) NSArray *movieList; // @synthesize movieList=_movieList;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long bid; // @synthesize bid=_bid;
@property(nonatomic) unsigned long long boardType; // @synthesize boardType=_boardType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;

@end

