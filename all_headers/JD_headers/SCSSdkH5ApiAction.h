//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSSdkH5ApiAction : NSObject
{
    NSString *_action;
    id _data;
    NSString *_callback;
    long long _method;
}

+ (id)modelWithParam:(id)arg1;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end

