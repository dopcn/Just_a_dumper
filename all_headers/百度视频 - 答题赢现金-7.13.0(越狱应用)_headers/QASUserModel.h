//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QASUserModel : NSObject
{
    NSString *_qid;
    NSString *_q;
    NSString *_t;
    NSString *_name;
    NSString *_avatar;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *t; // @synthesize t=_t;
@property(copy, nonatomic) NSString *q; // @synthesize q=_q;
@property(copy, nonatomic) NSString *qid; // @synthesize qid=_qid;
- (void).cxx_destruct;
- (id)initWithQid:(id)arg1 q:(id)arg2 t:(id)arg3 name:(id)arg4 avatar:(id)arg5 token:(id)arg6;

@end

