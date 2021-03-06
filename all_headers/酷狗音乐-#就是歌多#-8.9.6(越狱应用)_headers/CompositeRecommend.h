//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AlbumItem, NSArray, NSString, NetListTagInfo, RadioInfo, RankingItem, SpecialItem;

@interface CompositeRecommend : NSObject
{
    NSString *_title;
    long long _type;
    long long _onlineCount;
    long long _idCR;
    SpecialItem *_special;
    AlbumItem *_album;
    RankingItem *_rank;
    RadioInfo *_radio;
    NetListTagInfo *_classifiedTagInfo;
    NSArray *_theNewSongList;
    NSArray *_rcmdNewMVList;
    long long _dataFromType;
}

@property(nonatomic) long long dataFromType; // @synthesize dataFromType=_dataFromType;
@property(retain, nonatomic) NSArray *rcmdNewMVList; // @synthesize rcmdNewMVList=_rcmdNewMVList;
@property(retain, nonatomic) NSArray *theNewSongList; // @synthesize theNewSongList=_theNewSongList;
@property(retain, nonatomic) NetListTagInfo *classifiedTagInfo; // @synthesize classifiedTagInfo=_classifiedTagInfo;
@property(retain, nonatomic) RadioInfo *radio; // @synthesize radio=_radio;
@property(retain, nonatomic) RankingItem *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) AlbumItem *album; // @synthesize album=_album;
@property(retain, nonatomic) SpecialItem *special; // @synthesize special=_special;
@property(nonatomic) long long idCR; // @synthesize idCR=_idCR;
@property(nonatomic) long long onlineCount; // @synthesize onlineCount=_onlineCount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

