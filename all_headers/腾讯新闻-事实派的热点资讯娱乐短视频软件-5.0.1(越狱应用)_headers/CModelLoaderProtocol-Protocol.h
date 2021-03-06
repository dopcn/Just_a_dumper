//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSError, NSString;

@protocol CModelLoaderProtocol <NSObject>
- (void)modelSuccess;
- (void)modelFail;
- (void)modelStart;
- (NSError *)loaderError;
- (void)loadDataFromDisk:(NSString *)arg1 complete:(void (^)(id))arg2;
- (_Bool)checkCacheExist:(NSString *)arg1;
- (id)parseContent:(NSData *)arg1 params:(NSDictionary *)arg2;
- (void)writeDataToDisk:(NSString *)arg1;
- (NSString *)createLoadUrl:(NSString *)arg1;
- (void)cancel;
- (void)loadDataFromUrl:(NSString *)arg1 params:(NSDictionary *)arg2 priority:(long long)arg3 offline:(_Bool)arg4 checkCache:(_Bool)arg5;
- (void)loadDataFromUrl:(NSString *)arg1 params:(NSDictionary *)arg2 priority:(long long)arg3 offline:(_Bool)arg4;
- (void)loadDataFromUrl:(NSString *)arg1 params:(NSDictionary *)arg2 priority:(long long)arg3;
- (void)loadDataFromUrl:(NSString *)arg1 params:(NSDictionary *)arg2 offline:(_Bool)arg3;
- (void)loadDataFromUrl:(NSString *)arg1 params:(NSDictionary *)arg2 checkCache:(_Bool)arg3;
- (void)loadDataFromUrl:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)loadDataFromUrl:(NSString *)arg1;
@end

