//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMPrivateMessageMallItemRequest : NMBaseRequest
{
    NSString *_content;
    NSString *_userId;
}

@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)initWithContent:(id)arg1 userId:(id)arg2;

@end

