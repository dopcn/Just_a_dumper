//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMBaseModel.h"

@class NSArray, NSString;

@interface LMMissionGroup : LMBaseModel
{
    NSArray *_missions;
    NSString *_groupName;
}

+ (id)parseObjectsFromJSON:(id)arg1;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSArray *missions; // @synthesize missions=_missions;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

