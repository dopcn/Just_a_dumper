//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SPPerformanceStaticalTool : NSObject
{
    NSString *_moduleName;
    NSDate *_beginDate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)resetValue;
- (void)failToPerformanceWithErrorCode:(id)arg1 errorDesc:(id)arg2 apiPath:(id)arg3;
- (void)succeedPerformance;
- (void)startPerformanceWithModuleName:(id)arg1 viewController:(id)arg2;

@end

