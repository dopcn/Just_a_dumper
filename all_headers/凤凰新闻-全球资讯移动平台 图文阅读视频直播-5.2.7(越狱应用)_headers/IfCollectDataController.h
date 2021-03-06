//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IFDataModel.h"

@interface IfCollectDataController : IFDataModel
{
    long long _totalCount;
}

+ (id)getInstance;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
- (void)removeWithModels:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeWithDocid:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)mergeServerList:(id)arg1;
- (id)addorUpdateWithID:(id)arg1 GUID:(id)arg2 ctime:(id)arg3 Title:(id)arg4 docId:(id)arg5 type:(id)arg6 url:(id)arg7 thumbnail:(id)arg8 inMoc:(id)arg9;
- (void)saveWithMultibleServerDictionary:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)saveWithServerDictionary:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)saveWithTitle:(id)arg1 docId:(id)arg2 type:(id)arg3 url:(id)arg4 thumbnail:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (id)modelWithID:(id)arg1 andGUID:(id)arg2 inMoc:(id)arg3;
- (id)modelWithDocID:(id)arg1 andGUID:(id)arg2;
- (id)collectionsWithSortDateForGUID:(id)arg1 offset:(long long)arg2 count:(long long)arg3;
- (id)allCollectionsForGUID:(id)arg1;
- (id)allCollections;
- (void)loadMoreCollectFromServerWithOffset:(long long)arg1 andCallback:(CDUnknownBlockType)arg2;
- (void)reloadCollectFromServer:(CDUnknownBlockType)arg1;
- (void)loadCollectFromServerWithPage:(long long)arg1 andCallback:(CDUnknownBlockType)arg2;
- (_Bool)isCollectWithDocId:(id)arg1;

@end

