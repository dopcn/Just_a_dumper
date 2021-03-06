//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IEntResponse-Protocol.h"

@class NSArray, NSString;

@interface YYNearbyUserListResponse : NSObject <IEntResponse>
{
    _Bool _result;
    _Bool _lastPage;
    NSString *_msg;
    NSString *_context;
    NSArray *_users;
}

+ (id)objectUnmarshallFromData:(id)arg1;
+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(nonatomic, getter=isLastPage) _Bool lastPage; // @synthesize lastPage=_lastPage;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) _Bool result; // @synthesize result=_result;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

