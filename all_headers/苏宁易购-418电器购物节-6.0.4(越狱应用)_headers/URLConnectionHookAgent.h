//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface URLConnectionHookAgent : NSObject
{
    _Bool _hasHooked;
    struct objc_method *_ori_Method_initWithRequest1;
    struct objc_method *_ori_Method_initWithRequest2;
    struct objc_method *_ori_Method_connectionWithRequest;
    struct objc_method *_rep_Method_initWithRequest1;
    struct objc_method *_rep_Method_initWithRequest2;
    struct objc_method *_rep_Method_connectionWithRequest;
}

@property(nonatomic) _Bool hasHooked; // @synthesize hasHooked=_hasHooked;
@property(nonatomic) struct objc_method *rep_Method_connectionWithRequest; // @synthesize rep_Method_connectionWithRequest=_rep_Method_connectionWithRequest;
@property(nonatomic) struct objc_method *rep_Method_initWithRequest2; // @synthesize rep_Method_initWithRequest2=_rep_Method_initWithRequest2;
@property(nonatomic) struct objc_method *rep_Method_initWithRequest1; // @synthesize rep_Method_initWithRequest1=_rep_Method_initWithRequest1;
@property(nonatomic) struct objc_method *ori_Method_connectionWithRequest; // @synthesize ori_Method_connectionWithRequest=_ori_Method_connectionWithRequest;
@property(nonatomic) struct objc_method *ori_Method_initWithRequest2; // @synthesize ori_Method_initWithRequest2=_ori_Method_initWithRequest2;
@property(nonatomic) struct objc_method *ori_Method_initWithRequest1; // @synthesize ori_Method_initWithRequest1=_ori_Method_initWithRequest1;
- (void)stopAgent;
- (void)startAgent;
- (id)init;

@end

