//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface projectionHallUserModel : NSObject
{
    NSString *_imageUrl;
    NSString *_isHallOwner;
    NSString *_memberId;
}

@property(copy, nonatomic) NSString *memberId; // @synthesize memberId=_memberId;
@property(copy, nonatomic) NSString *isHallOwner; // @synthesize isHallOwner=_isHallOwner;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)setMemberFrom:(id)arg1 indexPosition:(long long)arg2;

@end

