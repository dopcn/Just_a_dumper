//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ClusterInfo.h"

#import "RecentUsedProtocol-Protocol.h"

@class NSArray, NSString;

@interface MusicCluster : ClusterInfo <RecentUsedProtocol>
{
    int gt;
    NSString *gl;
    NSString *info2;
    int cid;
    int sum;
    int sin;
    int ein;
    int endFlag;
    NSString *img;
    NSString *updateDate;
    NSString *time;
    NSString *language;
    _Bool _hasMore;
    double _lastuintime;
    double _firstuintime;
    NSString *_tjReport;
    long long _page;
    long long _nextpage;
    long long _perpage;
    unsigned long long _sortType;
    NSArray *_allTagCategories;
    NSArray *_selectedTagCategories;
}

+ (id)translateAlbumClusterFromNode:(struct _xmlNode *)arg1;
+ (id)translateSingerClusterFromNode:(struct _xmlNode *)arg1;
+ (id)translateClusterFromNode:(struct _xmlNode *)arg1;
@property(retain, nonatomic) NSArray *selectedTagCategories; // @synthesize selectedTagCategories=_selectedTagCategories;
@property(retain, nonatomic) NSArray *allTagCategories; // @synthesize allTagCategories=_allTagCategories;
@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) long long perpage; // @synthesize perpage=_perpage;
@property(nonatomic) long long nextpage; // @synthesize nextpage=_nextpage;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *tjReport; // @synthesize tjReport=_tjReport;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) double firstuintime; // @synthesize firstuintime=_firstuintime;
@property(nonatomic) double lastuintime; // @synthesize lastuintime=_lastuintime;
@property(nonatomic) int endFlag; // @synthesize endFlag;
@property(retain, nonatomic) NSString *language; // @synthesize language;
@property(retain, nonatomic) NSString *time; // @synthesize time;
@property(retain, nonatomic) NSString *info2; // @synthesize info2;
@property(retain, nonatomic) NSString *updateDate; // @synthesize updateDate;
@property(retain, nonatomic) NSString *img; // @synthesize img;
@property(nonatomic) int ein; // @synthesize ein;
@property(nonatomic) int sin; // @synthesize sin;
@property(nonatomic) int sum; // @synthesize sum;
@property(nonatomic) int cid; // @synthesize cid;
@property(retain, nonatomic) NSString *gl; // @synthesize gl;
@property(nonatomic) int gt; // @synthesize gt;
- (void).cxx_destruct;
- (_Bool)isDefaultFetchParam;
- (id)getFetchParamKeyStr;
- (void)resetFilterData;
- (_Bool)isContentEqual:(id)arg1;
- (void)serializeAsDictionary:(id)arg1;
- (void)deSerializeByDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

