//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FOrderDetailQuestion : NSObject
{
    NSString *_qid;
    NSString *_qstatus;
    NSString *_qtext;
    NSString *_qmsg;
    NSString *_qtouchurl;
    NSArray *_qbuttons;
}

@property(retain, nonatomic) NSArray *qbuttons; // @synthesize qbuttons=_qbuttons;
@property(retain, nonatomic) NSString *qtouchurl; // @synthesize qtouchurl=_qtouchurl;
@property(retain, nonatomic) NSString *qmsg; // @synthesize qmsg=_qmsg;
@property(retain, nonatomic) NSString *qtext; // @synthesize qtext=_qtext;
@property(retain, nonatomic) NSString *qstatus; // @synthesize qstatus=_qstatus;
@property(retain, nonatomic) NSString *qid; // @synthesize qid=_qid;
- (void).cxx_destruct;

@end

