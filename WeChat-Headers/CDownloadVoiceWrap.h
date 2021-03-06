//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSData, NSString;

@interface CDownloadVoiceWrap : NSObject <WCDBCoding>
{
    NSString *m_nsChatUsrName;
    long long m_n64SvrID;
    unsigned int m_uiLocalID;
    unsigned int m_uiOffset;
    unsigned int m_uiLen;
    unsigned int m_uiCreateTime;
    unsigned int m_uiVoiceLen;
    unsigned int m_uiVoiceTime;
    unsigned int m_uiEndFlag;
    NSData *m_dtVoice;
    unsigned int m_uiRetryCount;
    unsigned int m_uiCancelFlag;
    unsigned int ConIntRes1;
    unsigned int ConIntRes2;
    unsigned int ConIntRes3;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned int ConIntRes1; // @synthesize ConIntRes1;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(nonatomic) unsigned int m_uiEndFlag; // @synthesize m_uiEndFlag;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;
@property(nonatomic) unsigned int m_uiVoiceLen; // @synthesize m_uiVoiceLen;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(retain, nonatomic) NSString *m_nsChatUsrName; // @synthesize m_nsChatUsrName;
@property(nonatomic) unsigned int m_uiCancelFlag; // @synthesize m_uiCancelFlag;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice;
@property(nonatomic) unsigned int m_uiLen; // @synthesize m_uiLen;
@property(nonatomic) unsigned int m_uiOffset; // @synthesize m_uiOffset;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_ConStrRes3;
- (const WCDBCondition_22fabacd *)db_ConStrRes2;
- (const WCDBCondition_22fabacd *)db_ConStrRes1;
- (const WCDBCondition_c6db074e *)db_ConIntRes3;
- (const WCDBCondition_c6db074e *)db_ConIntRes2;
- (const WCDBCondition_c6db074e *)db_ConIntRes1;
- (const WCDBCondition_c6db074e *)db_m_uiRetryCount;
- (const WCDBCondition_c6db074e *)db_m_uiEndFlag;
- (const WCDBCondition_c6db074e *)db_m_uiVoiceTime;
- (const WCDBCondition_c6db074e *)db_m_uiVoiceLen;
- (const WCDBCondition_c6db074e *)db_m_uiCreateTime;
- (const WCDBCondition_94982106 *)db_m_n64SvrID;
- (const WCDBCondition_c6db074e *)db_m_uiLocalID;
- (const WCDBCondition_22fabacd *)db_m_nsChatUsrName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

