//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DCRequestManager : NSObject
{
    id request;
    _Bool _needCheckLogin;
    _Bool _needCheckLocation;
}

+ (_Bool)checkLocationAuthorize;
+ (id)oknet_adapterWithParamDic:(id)arg1 path:(id)arg2 model:(Class)arg3 type:(unsigned long long)arg4;
@property(nonatomic) _Bool needCheckLocation; // @synthesize needCheckLocation=_needCheckLocation;
@property(nonatomic) _Bool needCheckLogin; // @synthesize needCheckLogin=_needCheckLogin;
@property(retain, nonatomic) id request; // @synthesize request;
- (void).cxx_destruct;
- (void)cancel;
- (void)requestWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)oknet_adapterWithParamDic:(id)arg1 path:(id)arg2 model:(Class)arg3 type:(unsigned long long)arg4;

@end

