//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMAOSBaseRequest.h"

@class NSData;

@interface AMAOSFavoriteRequest : AMAOSBaseRequest
{
    NSData *_favoriteData;
}

@property(retain, nonatomic) NSData *favoriteData; // @synthesize favoriteData=_favoriteData;
- (void).cxx_destruct;
- (void)dealloc;
- (id)decodeJsonRequestData:(id)arg1;
- (void)afterPrepareRequest:(id)arg1;
- (_Bool)beforePrepareRequest:(id)arg1;
- (id)putParamsWithData:(id)arg1;
- (id)getRelativeUrl;
- (int)getServerType;
- (id)init;

@end

