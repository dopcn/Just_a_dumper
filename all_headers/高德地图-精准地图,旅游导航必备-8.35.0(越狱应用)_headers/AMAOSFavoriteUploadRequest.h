//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMAOSBaseRequest.h"

@interface AMAOSFavoriteUploadRequest : AMAOSBaseRequest
{
}

- (id)decodeJsonRequestData:(id)arg1;
- (id)putParamsWithJsonArrayString:(id)arg1 batchId:(id)arg2 uploadCount:(long long)arg3 isDone:(_Bool)arg4 ts:(long long)arg5;
- (id)getRelativeUrl;
- (int)getServerType;
- (id)init;

@end

