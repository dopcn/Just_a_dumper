//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNSBaseEntity.h"

@class NSArray, NSString;

@interface AtDataModel : SNSBaseEntity
{
    NSArray *_atUserList;
    NSString *_positionI;
}

+ (id)loadWithAtDatEntity:(id)arg1;
@property(copy, nonatomic) NSString *positionI; // @synthesize positionI=_positionI;
@property(retain, nonatomic) NSArray *atUserList; // @synthesize atUserList=_atUserList;
- (void).cxx_destruct;
- (void)loadWithDict:(id)arg1;

@end

