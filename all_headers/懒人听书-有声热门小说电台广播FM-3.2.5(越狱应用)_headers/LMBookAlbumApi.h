//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMBaseRequest.h"

@interface LMBookAlbumApi : LMBaseRequest
{
    long long _albumId;
}

+ (id)apiWithAlbumId:(long long)arg1;
@property(nonatomic) long long albumId; // @synthesize albumId=_albumId;
- (id)requestUrl;

@end

