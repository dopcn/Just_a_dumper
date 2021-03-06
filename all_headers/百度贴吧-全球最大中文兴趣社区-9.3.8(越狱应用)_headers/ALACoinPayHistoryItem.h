//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseItem.h"

@class NSString;

@interface ALACoinPayHistoryItem : TBCBaseItem
{
    NSString *_pid;
    NSString *_pname;
    NSString *_pdesc;
    NSString *_pprice;
    NSString *_transId;
    NSString *_create_time;
    NSString *_update_time;
    NSString *_uid;
    NSString *_rcount;
    NSString *_status;
}

+ (id)historyItemByDict:(id)arg1;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *rcount; // @synthesize rcount=_rcount;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *update_time; // @synthesize update_time=_update_time;
@property(copy, nonatomic) NSString *create_time; // @synthesize create_time=_create_time;
@property(copy, nonatomic) NSString *transId; // @synthesize transId=_transId;
@property(copy, nonatomic) NSString *pprice; // @synthesize pprice=_pprice;
@property(copy, nonatomic) NSString *pdesc; // @synthesize pdesc=_pdesc;
@property(copy, nonatomic) NSString *pname; // @synthesize pname=_pname;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (_Bool)isFailed;
- (id)transToDict;

@end

