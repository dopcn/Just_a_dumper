//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, stMetaPerson, stShareInfo;

@interface _TtC11microvision17WSUserListManager : NSObject
{
    // Error parsing type: , name: person
    // Error parsing type: , name: friendCount
    // Error parsing type: , name: recommendPersons
    // Error parsing type: , name: recommendDesc
    // Error parsing type: , name: inviteShareInfo
    // Error parsing type: , name: isLoading
    // Error parsing type: , name: dataManager
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithPerson:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading;
@property(nonatomic, retain) stShareInfo *inviteShareInfo; // @synthesize inviteShareInfo;
@property(nonatomic, copy) NSString *recommendDesc; // @synthesize recommendDesc;
@property(nonatomic, copy) NSArray *recommendPersons; // @synthesize recommendPersons;
@property(nonatomic) long long friendCount; // @synthesize friendCount;
@property(nonatomic, retain) stMetaPerson *person; // @synthesize person;

@end

