//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPDataController.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface PPChannelListDataController : PPDataController
{
    int mode;
    int type;
    int pageIndex;
    int pageCount;
    int totalCount;
    int countInPage;
    NSDictionary *currentTags;
    NSString *keyWord;
    NSMutableArray *channels;
    NSString *errInfo;
    _Bool _isCumulative;
    _Bool _needCache;
    NSString *_cacheName;
    NSMutableDictionary *_mutableProperties;
}

+ (id)retrieveSloturl:(id)arg1;
+ (id)retrieveSubtitleWithvsValue:(long long)arg1 vsTitle:(id)arg2;
+ (id)versionRequestingValueWithCartoonVersion:(id)arg1;
+ (id)makeVtContypeByType:(long long)arg1 videoType:(id)arg2;
+ (id)createTagWithCategory:(id)arg1 area:(id)arg2 year:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *mutableProperties; // @synthesize mutableProperties=_mutableProperties;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
@property(copy, nonatomic) NSString *cacheName; // @synthesize cacheName=_cacheName;
@property(nonatomic) _Bool isCumulative; // @synthesize isCumulative=_isCumulative;
@property(nonatomic) int countInPage; // @synthesize countInPage;
@property(retain, nonatomic) NSString *errInfo; // @synthesize errInfo;
@property(retain, nonatomic) NSMutableArray *channels; // @synthesize channels;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord;
@property(retain, nonatomic) NSDictionary *currentTags; // @synthesize currentTags;
@property(nonatomic) int totalCount; // @synthesize totalCount;
@property(nonatomic) int pageCount; // @synthesize pageCount;
@property(nonatomic) int pageIndex; // @synthesize pageIndex;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) int mode; // @synthesize mode;
- (void).cxx_destruct;
- (void)requestWithChannelIDS:(id)arg1 WithPage:(long long)arg2 andWithPageSize:(long long)arg3;
@property(readonly, nonatomic) NSDictionary *properties;
- (void)dealloc;
- (void)clearCache;
- (id)getChannelsBydate;
- (_Bool)parseContent:(id)arg1;
- (id)createCommonArgument;
- (void)requestWithArgs:(id)arg1;
- (id)retryHosts;
- (id)requestPath;
- (id)initWithDelegate:(id)arg1;

@end

