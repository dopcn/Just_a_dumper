//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface NewPassengerTrace : NSObject
{
    NSMutableArray *_addPassengerArray;
    NSString *_enterPassengerListTime;
    NSString *_currentEnterPassengerTime;
}

@property(retain, nonatomic) NSString *currentEnterPassengerTime; // @synthesize currentEnterPassengerTime=_currentEnterPassengerTime;
@property(retain, nonatomic) NSString *enterPassengerListTime; // @synthesize enterPassengerListTime=_enterPassengerListTime;
@property(retain, nonatomic) NSMutableArray *addPassengerArray; // @synthesize addPassengerArray=_addPassengerArray;
- (void).cxx_destruct;
- (void)finishNewPassenger;
- (void)cancelNewPassenger;
- (void)enterNewPassenger;
- (void)finishPassengerList;
- (void)cancelPassengerList;
- (void)enterPassengerList;
- (id)init;

@end

