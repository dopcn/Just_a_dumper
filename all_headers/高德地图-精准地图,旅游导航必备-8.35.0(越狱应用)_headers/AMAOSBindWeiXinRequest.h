//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMAOSAccountBaseRequest.h"

@class NSString;

@interface AMAOSBindWeiXinRequest : AMAOSAccountBaseRequest
{
    NSString *_code;
}

@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)getErrMessageByErrCode:(long long)arg1 requestData:(id)arg2;
- (id)decodeJsonRequestData:(id)arg1;
- (id)putParamsWithCode:(id)arg1 andMode:(long long)arg2;
- (id)getRelativeUrl;
- (void)dealloc;

@end

